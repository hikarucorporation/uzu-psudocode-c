// Function : String
// Namespace: juce:String
// Entry    : 004a7240
// Prototype: undefined String(float param_1, String * this)
// Body     : 004a7240 - 004a7335


/* juce::String::String(float) */

void __thiscall juce::String::String(float param_1,String *this)

{
  undefined8 uVar1;
  undefined *local_198 [4];
  long local_178;
  long local_170;
  locale local_160 [8];
  byte local_158 [48];
  undefined *local_128;
  undefined *local_120 [27];
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
                    /* try { // try from 004a7255 to 004a7263 has its CatchHandler @ 004a7370 */
  NumberToStringConverters::StackArrayStream::StackArrayStream
            ((StackArrayStream *)local_198,(long)local_158);
  std::ios_base::ios_base((ios_base *)local_120);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_128 = PTR_vtable_00715420 + 0x18;
  local_120[0] = PTR_vtable_00715420 + 0x40;
                    /* try { // try from 004a72c7 to 004a72d0 has its CatchHandler @ 004a7343 */
  std::ios::init((streambuf *)(local_158 + *(long *)PTR_vtable_00715420 + 0x30));
                    /* try { // try from 004a72db to 004a72e7 has its CatchHandler @ 004a7336 */
  std::ostream::_M_insert<double>((double)param_1);
  std::ios_base::~ios_base((ios_base *)local_120);
  local_198[0] = PTR_vtable_00715ca8 + 0x10;
  std::locale::~locale(local_160);
  uVar1 = StringHolderUtils::createFromFixedLength(local_158,local_170 - local_178);
  *(undefined8 *)this = uVar1;
  return;
}


