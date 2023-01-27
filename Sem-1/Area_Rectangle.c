// Define a function named, area_of_rectangle, in C to calculate the area of a rectangle when its length and breadth are given as arguments to the function (assume both are integers). 
// The function should return the value of the area (also an integer).
//  Do not print anything inside the function, you should only return the value of area. 
// It will be automatically printed by the caller function (in this case, main function (defined by us)).

int area_of_rectangle(int l, int b){
    int area;
    area=l*b;
    return area;
}