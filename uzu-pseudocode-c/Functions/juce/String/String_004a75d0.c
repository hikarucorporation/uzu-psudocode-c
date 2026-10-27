// Function : String
// Namespace: juce:String
// Entry    : 004a75d0
// Prototype: undefined String(float param_1, String * this, uint param_3, char param_4)
// Body     : 004a75d0 - 004a7648


/* juce::String::String(float, int, bool) */

void __thiscall juce::String::String(float param_1,String *this,uint param_3,char param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_88 [7];
  locale local_50 [8];
  byte local_48 [48];
  
                    /* try { // try from 004a75e8 to 004a75f6 has its CatchHandler @ 004a766e */
  NumberToStringConverters::StackArrayStream::StackArrayStream
            ((StackArrayStream *)local_88,(long)local_48);
                    /* try { // try from 004a7601 to 004a760f has its CatchHandler @ 004a7649 */
  lVar1 = NumberToStringConverters::StackArrayStream::writeDouble
                    ((double)param_1,(StackArrayStream *)local_88,param_3,param_4);
  local_88[0] = PTR_vtable_00715ca8 + 0x10;
  std::locale::~locale(local_50);
  uVar2 = StringHolderUtils::createFromFixedLength(local_48,lVar1);
  *(undefined8 *)this = uVar2;
  return;
}


