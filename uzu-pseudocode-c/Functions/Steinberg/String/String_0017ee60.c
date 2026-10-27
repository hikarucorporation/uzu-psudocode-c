// Function : String
// Namespace: Steinberg:String
// Entry    : 0017ee60
// Prototype: undefined String(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * this, uint * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0017ee60 - 0017ee8c


/* Steinberg::String::String(Steinberg::FVariant const&) */

void __thiscall
Steinberg::String::String
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,String *this,
          uint *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__String_00702c10;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | 0x40000000;
                    /* try { // try from 0017ee86 to 0017ee8a has its CatchHandler @ 0017ee8d */
  fromVariant(param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this,param_10,
              param_11,&PTR__String_00702c10,param_13,param_14);
  return;
}


