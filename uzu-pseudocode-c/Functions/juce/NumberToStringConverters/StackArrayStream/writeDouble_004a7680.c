// Function : writeDouble
// Namespace: juce:NumberToStringConverters:StackArrayStream
// Entry    : 004a7680
// Prototype: long writeDouble(double param_1, StackArrayStream * this, uint param_3, char param_4)
// Body     : 004a7680 - 004a7753


/* juce::NumberToStringConverters::StackArrayStream::writeDouble(double, int, bool) */

long __thiscall
juce::NumberToStringConverters::StackArrayStream::writeDouble
          (double param_1,StackArrayStream *this,uint param_3,char param_4)

{
  uint uVar1;
  undefined *local_130;
  undefined *local_128 [2];
  uint auStack_118 [50];
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  std::ios_base::ios_base((ios_base *)local_128);
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_130 = PTR_vtable_00715420 + 0x18;
  local_128[0] = PTR_vtable_00715420 + 0x40;
                    /* try { // try from 004a76f1 to 004a76f8 has its CatchHandler @ 004a775e */
  std::ios::init((streambuf *)((long)local_128 + *(long *)PTR_vtable_00715420 + -8));
  if (0 < (int)param_3) {
    uVar1 = 4;
    if (param_4 != '\0') {
      uVar1 = 0x100;
    }
    *(uint *)((long)auStack_118 + *(long *)(local_130 + -0x18)) =
         *(uint *)((long)auStack_118 + *(long *)(local_130 + -0x18)) | uVar1;
    *(ulong *)((long)local_128 + *(long *)(local_130 + -0x18)) = (ulong)param_3;
  }
                    /* try { // try from 004a7725 to 004a7733 has its CatchHandler @ 004a7754 */
  std::ostream::_M_insert<double>(param_1);
  std::ios_base::~ios_base((ios_base *)local_128);
  return *(long *)(this + 0x28) - *(long *)(this + 0x20);
}


