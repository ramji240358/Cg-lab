Title: Filling the pictures

Algorithm:

Flood fill

4-connected approach:

We can implement flood fill algorithm by using recursion.
First all the pixels should be reassigned to common color. here common color is black.
Start with a point inside given object, check the following condition: if(getpixel(x,y)==old_col)---old_col is common color
If above condition is satisfied, then following 4 steps are followed in filling the object. //Recursive 4-way floodfill. putpixel(x,y,fill_col); flood(x+1,y,fill_col,old_col); flood(x-1,y,fill_col,old_col); flood(x,y+1,fill_col,old_col); flood(x,y-1,fill_col,old_col);
8-connected approach:

We can implement flood fill algorithm by using recursion.
First all the pixels should be reassigned to common color. here common color is black.
Start with a point inside given object, check the following condition: if(getpixel(x,y)==old_col)---old_col is common color
If above condition is satisfied, then following 8 steps are followed in filling the object. //Recursive 4-way floodfill. putpixel(x,y,fill_col); flood(x+1,y,fill_col,old_col); flood(x-1,y,fill_col,old_col); flood(x,y+1,fill_col,old_col); flood(x,y-1,fill_col,old_col); flood(x + 1, y - 1, fill_col, old_col); flood(x + 1, y + 1, fill_col, old_col); flood(x - 1, y - 1, fill_col, old_col); flood(x - 1, y + 1, fill_col, old_col);
Boundary fill

Start from an interior point.
If the current pixel is not already filled and if it is not an edge point, then set the pixel with the fill color, and store its neighboring pixels (4 or 8-connected). Store only neighboring pixel that is not already filled and is not an edge point.
Select the next pixel from the stack, and continue with step 2.
Conlusion: We learnt the colling filling algorithms like flood fill and boundary fill.