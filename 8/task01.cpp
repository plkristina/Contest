class Keeper2 {
public:
    int trash;
    int secret;
};

int hack_it(Keeper keeper) {
    return ((Keeper2*)&keeper)->secret;
};
