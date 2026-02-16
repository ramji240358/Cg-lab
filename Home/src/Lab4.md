Title: Midpoint Circle Generation Algorithm

Algorithm:

 1. Input radius r and circle centre (xc, yc), then set the coordinates for the first point on the circumference of a circle centered on the origin as:

  (x0,y0) = (0,r)

 2. Calculate the initial value of the decision parameter as:

  po=5/4-r

 

 3. Starting with k = 0 at each position xk, perform the following test. If pk < 0, the next point along the circle centered on (0, 0) is (x{k+1}, yk) and:

 

  p{k+1} = pk + 2x{k+1} +1

 

 

Otherwise the next point along the circle is (x{k+1}, y{k-1}) and:

  p{k+1} = pk + 2x{k+1} + 1 - 2y{k+1}

 

 4. Determine symmetry points in the other seven octants.

 5. Move each calculated pixel position (x, y) onto the circular path centered at (xc, yc) to plot the coordinate values:

 

 6. Repeat steps 3 to 5 until x >= y

  x = x + xc y = y + yc

Symmetric pixel positions:

The following lines use a putpixel function to plot the eight symmetric points for every calculated (x, y) coordinate, shifted by the center (xc, yc):

 * putpixel(xc+x, yc-y, GREEN); // For pixel (x, y)

 * putpixel(xc+y, yc-x, GREEN); // For pixel (y, x)

 * putpixel(xc+y, yc+x, GREEN); // For pixel (y, -x)

 * putpixel(xc+x, yc+y, GREEN); // For pixel (x, -y)

 * putpixel(xc-x, yc+y, GREEN); // For pixel (-x, -y)

 * putpixel(xc-y, yc+x, GREEN); // For pixel (-y, -x)

 * putpixel(xc-y, yc-x, GREEN); // For pixel (-y, x)

 * putpixel(xc-x, yc-y, GREEN); // For pixel (-x, y)

Conclusion:

We learnt to draw circle in BGI using midpoint circle algorithm.