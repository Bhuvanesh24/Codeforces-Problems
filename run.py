# def quickSort(arr,low,high):
#     if low>=high:
#         return
#     partIndex = partition(arr,low,high)
#     quickSort(arr,low,partIndex-1)
#     quickSort(arr,partIndex+1,high)

# def partition(arr,low,high):
#     pivot  = arr[low]
#     i = low
#     j = high

#     while i<j:
#         while(i<=high-1 and arr[i]>=pivot):
#             i+=1
#         while(j>=low+1 and arr[j]<pivot):
#             j-=1
        
#         if i<j:
#             arr[i],arr[j] = arr[j],arr[i]
        
#     arr[low],arr[j] = arr[j],arr[low]
#     return j

# def mergeSort(arr,low,high):
#     if low>=high:
#         return 
#     mid = (low+high)//2
#     mergeSort(arr,low,mid)
#     mergeSort(arr,mid+1,high)
#     merge(arr,low,mid,high)

# def merge(arr,low,mid,high):
#     temp = []
#     i = low
#     j = mid+1

#     while(i<=mid and j<=high):
#         if arr[i]<arr[j]:
#             temp.append(arr[i])
#             i+=1
#         else:
#             temp.append(arr[j])
#             j+=1
#     while(i<=mid):
#         temp.append(arr[i])
#         i+=1
#     while (j<=high):
#         temp.append(arr[j])
#         j+=1
    
#     for k in range(low,high+1):
#         arr[k] = temp[k-low]

# arr = [10,7,8,9,1,5]
# mergeSort(arr,0,len(arr)-1)
# print(arr)

from pymongo import MongoClient

# Replace with your MongoDB Atlas connection string
uri = "mongodb+srv://sri:root@cluster0.f1wjt.mongodb.net/attendance?retryWrites=true&w=majority&appName=Cluster0"

try:
    # Create a MongoDB client
    client = MongoClient(uri, serverSelectionTimeoutMS=10000)  # 10 seconds timeout

    # Test the connection by pinging the server
    client.admin.command('ping')
    print("Connected to MongoDB!")

    # Access a specific database (optional)
    db = client['attendance']
    print(f"Database '{db.name}' accessed successfully.")

except Exception as e:
    print("Connection error:", e)
