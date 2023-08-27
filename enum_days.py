import os
with open("/home/team12/StockMatching/days", "w") as f:
    f.write("".join(os.listdir("/mnt/data")))