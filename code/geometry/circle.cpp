struct circle {
    // center point and radius
    point c;
    double r;
    
    // constructors
    circle() : r(0) {}
    circle(point c, double r) : c(c), r(r) {}
    circle(point i, point j, point k) {
        double sq1 = (i.x*i.x+i.y*i.y);
        double sq2 = (j.x*j.x+j.y*j.y);
        double sq3 = (k.x*k.x+k.y*k.y);
        
        double A = i.x*(j.y-k.y) - i.y*(j.x-k.x) + j.x*k.y - j.y*k.x;
        double B = sq1*(k.y-j.y) + sq2*(i.y-k.y) + sq3*(j.y-i.y);
        double C = sq1*(j.x-k.x) + sq2*(k.x-i.x) + sq3*(i.x-j.x);
        double D = sq1*(k.x*j.y - j.x*k.y) + sq2*(i.x*k.y-k.x*i.y) +
                   sq3*(j.x*i.y-i.x*j.y);
        
        c = point(-B / (2*A), -C / (2*A));
        r = sqrt((B*B + C*C - 4*A*D) / (4*A*A));
    }
    
    // methods
    double diameter() {
        return r * 2;
    }
    double circumference() {
        return 2 * M_PI * r;
    }
    double area() {
        return M_PI * r * r;
    }
};
