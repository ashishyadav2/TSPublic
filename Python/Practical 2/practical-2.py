import os
#open file for reading
file_path = "F:\Ashish\Backup Google Drive\Documents-Lecture\SEM 4\Coding\Coding\Python\Practical 2"
if os.path.exists("%s\demo-r.txt"%(file_path)):
    f=open("%s\demo-r.txt"%(file_path),"r")
    #print only first 5 characters
    print(f.read(5))
    #print rest of first line of file
    print(f.readline())
    #print remaining lines of file
    print(f.read())
    #close file
    f.close()
else:
    print("The file does not exist")
    
#Create a new file if it does not exist
f=open("%s\demo-w.txt"%(file_path),"w")
#write to file
f.write("Added 1st line \n")
f.write("Added 2nd line \n")
f.close()
#loop through file
f=open("%s\demo-w.txt"%(file_path),"r")
for i in f:
    print(i)
f.close()
#delete file if file exists
#if os.path.exists("newfile.txt"):
  #  os.remove("newfile.txt")
   # print("Deleted file!")
#else:
   # print("The file does not exist")