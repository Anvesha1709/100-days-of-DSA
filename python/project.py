import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("crop_dataset_with_npk.csv")

print(data.head())
import os
print(os.getcwd())