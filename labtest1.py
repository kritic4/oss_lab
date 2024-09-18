def avg(arr,hourly_avg):
    n=len(arr)
    if n>=60:
        for i in arr:
        sum=sum+arr[i]
    avg=sum/n
    arr.append(avg)
    return hourly_avg
    

    
def band_filter(arr):
    smooth=filter(arr)
    return smooth

import matplotlib as plt
from scipy import signal

traffic_data=np.array([3,4,6,6,4])
random_noise=np.random.rand(1440)
hourly_avg=np.array([40,30,60,60,45])

n=input("enter no. of entries you want to make")
for i in range(0,len(traffic_data)):
    new_data=input("enter new entry-")
    traffic_data.append(new_data)
    
new_hourly_avg=avg(traffic_data,hourly_avg)
smooth=band_filter(random_noise)
x=linspace(0,1440)
plt.plot(x,traffic_data)
plt.plot(x,smooth)
plt.plot(x,new_hourly_avg,markers='x')
plt.show()    
