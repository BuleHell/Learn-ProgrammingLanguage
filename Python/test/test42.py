#!/usr/bin/python
# -*- coding: cp936 -*-
import matplotlib.pyplot as plt 
import numpy as np
import pandas as pd
import statsmodels.api as sm
from statsmodels.nonparametric.kde import KDEUnivariate
from statsmodels.nonparametric import smoothers_lowess
from pandas import DataFrame
from patsy import dmatrices