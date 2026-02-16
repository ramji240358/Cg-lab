Title:Digital Differential Analyzer Algorithm

Algorithm:

Start. ∆ y = m ∆ x y2-y1 = m (x2-x1)
Declare variables x,y,x1,y1,x2,y2,k,dx,dy,s,xi,yi and also declare gdriver=DETECT, mode.
Initialize the graphic mode with the path location in TurboC3 folder.
Input the two line end-points and store the left end-points in (x1,y1).
Load (x1, y1) into the frame buffer; that is, plot the first point. put x=x1,y=y1.
Calculate dx=x2-x1 and dy=y2-y1.
If abs (dx) > abs (dy), do s=abs(dx).
Otherwise s= abs(dy).
Then xi=dx/s and yi=dy/s.
Start from k=0 and continuing till k<s,the points will be i. x=x+xi. ii. Y=y+yi.
Plot pixels using putpixel at points (x,y) in specified colour.
Close Graph and stop.
Conclusion: We learnt about the use of DDA(digital differential analyzer) line algorithm. In this algorithm ,we needed to round up decimal point values to get pixel value which would creale some round off error.