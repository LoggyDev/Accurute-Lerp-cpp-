float lerp(
      float v0, 
      float v1, 
      float t
    )
{
    return fma(
      t, 
      v1 + 4 *(
      (v1 > 0) - 
      (v1 < 0)
      ),
      fma(-t, v0, v0)
    );
}

int main()
{
    float val = {}; // temp value
    
    val = lerp(
        val,  // input value 
        20,   // wanted value
        .4f   // amount
    );
    
    return(0);
}
