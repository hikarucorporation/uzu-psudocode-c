// Function : String
// Namespace: Steinberg:String
// Entry    : 0017ec30
// Prototype: undefined String(String * this, long * param_1, uint param_2)
// Body     : 0017ec30 - 0017ec75


/* Steinberg::String::String(Steinberg::String const&, int) */

void __thiscall Steinberg::String::String(String *this,long *param_1,uint param_2)

{
  uint uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x10) = uVar1 & 0x80000000;
  *(undefined ***)this = &PTR__String_00702c10;
  *(uint *)(this + 0x10) = *(uint *)(param_1 + 2) & 0x40000000 | uVar1 & 0x80000000;
  if ((param_1[1] != 0) && ((*(uint *)(param_1 + 2) & 0x3fffffff) != 0)) {
                    /* try { // try from 0017ec6f to 0017ec73 has its CatchHandler @ 0017ec76 */
    assign(this,param_1,param_2);
  }
  return;
}


