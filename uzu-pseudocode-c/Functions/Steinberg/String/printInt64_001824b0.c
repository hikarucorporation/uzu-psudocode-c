// Function : printInt64
// Namespace: Steinberg:String
// Entry    : 001824b0
// Prototype: String * printInt64(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * this, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 001824b0 - 001824e8


/* Steinberg::String::printInt64(long) */

String * __thiscall
Steinberg::String::printInt64
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,String *this,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  undefined1 unaff_BL;
  
  if (((byte)this[0x13] & 0x40) == 0) {
    printf(param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this,"%lld",param_10,
           param_12,param_13,param_14,unaff_BL);
    return this;
  }
  printf(param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this,0x5dbfa4,param_10,
         param_12,param_13,param_14,unaff_BL);
  return this;
}


