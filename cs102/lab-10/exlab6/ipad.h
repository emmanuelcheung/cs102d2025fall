typedef struct { int price; int size; } ipad_t;
void clear_ipads();
int  get_ipad_price(int which);
void set_ipad_price(int which, int newprice);
int  get_ipad_size(int which);
void set_ipad_size(int which, int newsize);

/* NEW: new prototypes */
void print_ipads();
int  get_special_ipad();
void set_special_ipad(int special);

void upshift_special();
void downshift_special();
