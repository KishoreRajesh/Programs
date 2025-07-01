import pandas as pd;

technologies = {
   'Courses':["Spark","PySpark","Hadoop","Python","PySpark","Spark"],
   'Fee' :[20000,25000,26000,22000,24000,3000],
   'Duration':['30day','40days','35days','40days','60days','60days'],
   'Discount':[1000,2300,1200,2500,2000,2000]
   }

df = pd.DataFrame(technologies)
print(df)
print()

print("Aggregate functions SUM")
result = df[['Fee','Discount']].aggregate('sum')
print(result)
print()

print("Aggregate function AVG")
result = df[['Fee','Discount']].aggregate('average')
print(result)
print()

print("Aggregate function MIN MAX")
result = df.groupby('Courses')['Fee'].aggregate(['min','max'])
print(result)
print()

print("Aggregate function MEAN")
result = df[['Fee','Discount']].aggregate('mean')
print(result)
print()