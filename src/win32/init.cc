namespace gstack{
    void init(){
        #if(RLS)
        trace::file = fopen("gstack.log", "a+");
        #endif
    }
    void uninit(){
        #if(RLS)
        fclose(trace::file);
        #endif
    }
};