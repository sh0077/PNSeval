

// BASIC FUNCTIONS 
// PLOTTING FUNCTIONS 
// PROBABILITY FUNCTIONS 


// BASIC FUNCTIONS 
x = c(10,20,30,40,50)

x = seq(from, to, by, length.out, along.with)

min(), max() 

cat()

fact()

round(x,n)
// n - no. of decimal places 

abs()

exp()

(x^2) 
// and not pow()


sample(x, size, replace = FALSE, prob = NULL)
// x - given data
// size - no. of items you are choosing 
// so this function returns the no. of items that you mention in "size" randomly from the given data

// using sample, 
// we can produce sample space with the given probablities of the data 
data = c("Success", "Failure")
sample(x = data, size = 10, prob=c(0.9,0.1), replace = T)



var = readline(prompt = "Enter a number") 
n = as.integer(var)


val <- switch(
   4,
   "Geeks1",
   "Geeks2",
   "Geeks3",
   "Geeks4",
   "Geeks5",
   "Geeks6"
)
print(val)


// user defined function
func_name = function( parameters.. )
{
   // processing 
}



head(iris)

summary(iris)

str(iris)
// structure of iris 


// functions that are to applied on a column 
// range of values of a column 
range(iris$Sepal.Length)

var(iris$Sepal.Width)

sd(iris$Sepal.Width) 

mean(iris$Sepal.Length)

median(iris$Sepal.Length)

quantile(iris$Sepal.Length, 0.25)
// to get the quantile value 
// for first quantile -> 0.25 
// for second quantile -> 0.50
// for third quantile -> 0.75




data = unique(x) 
// creates a vector with only the unique elements from the given data


// eg- 
x<-c(0,1,2,3,4)
p<-c(0.41,0.37,0.16,0.05,0.01)
ans <-sum (x*p)
// then their corresponding values will be multiplied 


// intergation in R 
integral(my_function, lower = 0, upper = 10)

integral2(my_function, xmin=0, xmax=10, ymin=0, ymax=10)


// eg- 
F<-function (x) {0.5 * x * exp (-abs (x))} 
val<-integral (F,1,10)
print (val$value)
// and not just simply val, 
// integral ke result mein we have to use 
// ans$value 


// to do advance math functions 
if(!require('pracma')) {
    install.packages('pracma')
    library('pracma')
}


// R progr. has 1 based indexing everywhere 


sum(M1)
// we can do sum of all the elements of a matrix 

apply(mat, MARGIN, function)
// mat: your matrix
// MARGIN: 1 or 2 
   // 1 => row 
   // 2 => column
// function can be sum, min, max, mean etc. 


// when we want to print marginal pdfs using apply() function 
// marginal pdf of x 
gx = apply(mat,1,sum)
gx

// marginal pdf of y 
hy = apply(mat,2,sum)
hy



// PLOTTING FUNCTIONS 
x = c(1,2,3,4,5)
y = c(10,23,54,44,12)

plot(x,y)

pie(x, labels, radius, main, col)
// x - data
// labels - names of the data 
// main - title of the chart 
// col - rainbow(5)
// radius - radius of the circle 


legend("topright", labels, cex = 0.5, fill = rainbow(5))
// small box on the side showing some categorical info. 
// cex - size 
// fill - rainbow(5), for colour, and not col 


barplot(x, names.arg=labels, xlab="Model Name", ylab="Sales Freq", col=rainbow(5), main="My Bar plot")
// names.arg - to give labels 
// xlab - to give labels of x 
// ylab - to give labels of y 
// col - to give color 
// main - to give title 




// PROBABILITY FUNCTIONS 

/*

bionomial dist. 
dbinom
pbinom

uniform dist. 
punif 

normal dist. 
pnrom 


poisson dist. 
ppois 

exponential dist. 
dexp
pexp 
rexp 


gamma dist. 
dgamma
pgamma
qgamma

*/

// bionomial 

dbinom(k, no.oftrials, p)
// this will return the pdf  

pbinom(k, no.oftrials, p)
// this will return the cdf 


// for bionomial, 
// mean = np 
// var = npq 
// sd = sqrt(npq)



// uniform distribution

// punif function to calculate the uniform cumulative distribution function
punif(x, min, max, lower.tail)
// # Lower limit of the distribution (a)
// # Upper limit of the distribution (b)
// # If TRUE, probabilities are P(X <= x), or P(X > x) otherwise


// WE NEVER USED 1-P() THING IN OUR CODE. 




// normal distribution 

// What Is a Normal Distribution? Normal distribution, also known as the Gaussian distribution, 
// is a probability distribution that is symmetric about the mean, showing that data near the 
// mean are more frequent in occurrence than data far from the mean. In graphical form, the 
// normal distribution appears as a "bell curve".
pnorm(x, mean, sd, lower.tail) 
// lower.trail => 
// if True, then <= or say left wing area 
// if False, then > or right wing area 


// Poisson distribution is used to model the # of events in the future, Exponential distribution 
// is used to predict the wait time until the very first event, 
// and Gamma distribution is used to predict the wait time until the k-th event.

// poisson distribution 

// for a single value of k 
a = ppois(k-1, λt)
b = ppois(k, λt)
print(b-a)


// for interval of k1 to k2 both inclusive
a = ppois(k1-1,λt)
b = ppois(k2,λt)
print(b-a)



// exponential density distribution 
// dexp
// returns the exponential density pdf for a data
dexp(x, rate)

// pexp 
// returns the exponential density cdf for a data
pexp(x, rate)
// rate is lambda. 

// this is used everytime we want to plot things in these exponential things excpet rexp. 
plot(x,y,type='o')



// rexp() function is used to simulate a set of random numbers drawn from the exponential distribution.
rexp(N, rate)

// it's code will be, 
N <- 1000
y_rexp <- rexp(N, rate = 1/2)
plot(density(y_rexp))



// gamma distribution 

// dgamma() function 
// is used to create gamma density plot which is basically used due to exponential and normal distributions factors.
dgamma(x, shape, scale)


// pgamma() function 
// is used in cumulative distribution function (CDF) of the gamma distribution.
pgamma(x, shape, scale, lower.tail)


// qgamma() Function
qgamma(x, shape, scale)
// It is known as gamma quantile function. 
// this will be applied in the case when we have to find the x thing here, 
// What is the value of x, if P(X ≤ x) ≥ 0.70?








