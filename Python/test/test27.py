#!/usr/bin/python
# -*- coding: cp936 -*-
import urllib,urllib2,sys,os
from BeautifulSoup import BeautifulSoup
import itertools,re

url_i =1
pic_num = 1

def _en_to_cn(str):
    obj = itertools.cycle(['“','”'])
    _obj = lambda x: obj.next()
    return re.sub(r"['\"]",_obj,str)

if __name__ == '__main__':

    while url_i <= 3:
        webContent = urllib2.urlopen("http://news.youku.com/focus/index/_page26716_" + str(url_i) + ".html")
        data = webContent.read()

        soup = BeautifulSoup(data)
        print "-------------------------Page " + str(url_i) + "-------------------------"

        tag_list_thumb = soup.findAll('li','v_thumb')
        tag_list = soup.findAll('li', "v_title")
        for item in tag_list:
            web_video_play = urllib2.urlopen(item.a['href'])
            data_vp = web_video_play.read()

            soup_vp = BeautifulSoup(data_vp)
            tag_vp_list = soup_vp.findAll('a', id = 'fn_download')
            for item_vp in tag_vp_list:
                url_dw = '"' + item_vp['_href'] + '"'
                print item.a['title'] + ": " + url_dw
                os.system("iku " + url_dw)
        for item_thumb in tag_list_thumb:
            urllib.urlretrieve(item_thumb.img['src'], "E:\\下载视频\\thumbnails\\" + str(pic_num) + "." +
                               _en_to_cn(item_thumb.img['title']) + ".jpg")
            pic_num += 1
        print "--------------------------------------------------------------"
        print "--------Page " + str(url_i) + "'s video thumbnails have  been saved!"
        url_i += 1