// Write a function, initial_price, that takes two arrays as inputs (both of the same size) - price array and the quantity array, and calculates the total price of all the items, and returns it.
// Write another function, discounted_price, which takes two inputs - price and the discount - and returns the discounted price.

int initial_price(int prices[], int quantities[], int n){ 
    int sum=0;
    for (int i=0; i<n; i++) { sum+=prices[i]*quantities[i]; }
    return sum;
}
    

float discounted_price(float price, float discount){
    return price-((price*discount)/100);

}