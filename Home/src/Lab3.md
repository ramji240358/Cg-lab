Title: Bresenhem Line Drawing Algorithm

Algorithm:

Input the two line end-points, storing the left end-point in (x0, y0)

Plot the point (x0, y0)

Calculate the constants Δx, Δy, 2Δy, and (2Δy - 2Δx) and get the first value for the decision parameter as: p0 = 2Δy - Δx

At each xk along the line, starting at k = 0, perform the following test. If pk < 0, the next point to plot is (xk+1, yk ) and:

               pk+1 = pk + 2Δy
Otherwise, the next point to plot is (xk+1, yk+1) and:

                  pk+1 = pk + 2Δy - 2Δx
Repeat step 4 (Δx – 1) times
NOTE: The algorithm and derivation above assumes slopes are less than 1. For other slopes we need to adjust the algorithm slightly

Conclusion: We used this algorithm to create more straight line as this algorithm doesn't contain round off error like DDA.