#A pipe manufacturing organization produces different kinds of pipes. We are given
the monthly data of the wall thickness of certain types of pipes (data is available on
                                                                  LMS Clt-data.csv).
The organization has an analysis to perform and one of the basic assumption of that
analysis is that the data should be normally distributed.
You have the following tasks to do:
  (a) Import the csv data file in R.
(b) Validate data for correctness by counting number of rows and viewing the top
ten rows of the dataset.
(c) Calculate the population mean and plot the observations by making a histogram.
(d) Mark the mean computed in last step by using the function abline.
See the red vertical line in the histogram? That’s the population mean. Comment on
whether the data is normally distributed or not?
  Now perform the following tasks:
  (a) Draw sufficient samples of size 10, calculate their means, and plot them in R
by making histogram. Do you get a normal distribution.
(b) Now repeat the same with sample size 50, 500 and 9000. Can you comment on
what you observe.
Here, we get a good bell-shaped curve and the sampling distribution approaches
normal distribution as the sample sizes increase. Therefore, we can recommend the
organization to use sampling distributions of mean for further analysis


#(a)
read.csv("C:/Users/HP/Downloads/Clt-data.csv")
data<-read.csv(file.choose())
#(b)
dim(data)
abc<-head(data,10)
#(c)
a<-mean(data$Wall.Thickness)
nrow(data)
hist(data$Wall.Thickness)
#(d)
abline(v=a,col='red')
aa<-sample(data[,1],10)
mean(aa)
hist(aa)
s=c()
hist(s)
for (i in 1:500)
{
  s[i]<-mean(sample(data[,1],1000,replace=TRUE))
}
hist(s)
par(mfcol=c(2,2))

