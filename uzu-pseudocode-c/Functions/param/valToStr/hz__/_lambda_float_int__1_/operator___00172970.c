// Function : operator()
// Namespace: param:valToStr:hz__:_lambda_float_int__1_
// Entry    : 00172970
// Prototype: juce * operator()(float param_1, juce * param_2)
// Body     : 00172970 - 00172a3f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* param::valToStr::hz()::{lambda(float, int)#1}::TEMPNAMEPLACEHOLDERVALUE(float, int) const */

juce * __cdecl param::valToStr::hz()::{lambda(float,int)#1}::operator()(float param_1,juce *param_2)

{
  String *this;
  String aSStack_28 [8];
  String local_20 [8];
  String local_18 [8];
  
  if (DAT_005d94c4 <= param_1) {
    if (DAT_005d94d8 <= param_1) {
      if (param_1 < DAT_005d94d8) {
        juce::String::String((String *)param_2);
        return param_2;
      }
      juce::String::String(param_1 / DAT_005d94d8,aSStack_28,1,'\0');
                    /* try { // try from 00172a1b to 00172a2c has its CatchHandler @ 00172a40 */
      juce::operator+(param_2,aSStack_28," khz");
      this = aSStack_28;
    }
    else {
      juce::String::String(param_1,local_20,1,'\0');
                    /* try { // try from 001729d5 to 001729e6 has its CatchHandler @ 00172a42 */
      juce::operator+(param_2,local_20," hz");
      this = local_20;
    }
  }
  else {
    juce::String::String(param_1,local_18,2,'\0');
                    /* try { // try from 0017299b to 001729ac has its CatchHandler @ 00172a44 */
    juce::operator+(param_2,local_18," hz");
    this = local_18;
  }
  juce::String::~String(this);
  return param_2;
}


