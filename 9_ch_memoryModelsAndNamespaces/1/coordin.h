#ifndef COORDIN_H_
#define COORDIN_H_

/* structure templates */
struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

/* prototypes */
struct polar rect_to_polar(struct rect xypos);
void show_polar(struct polar dapos);

#endif /* COORDIN_H_ */
