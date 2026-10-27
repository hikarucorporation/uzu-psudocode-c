// Function : getText
// Namespace: juce:AudioProcessorParameter
// Entry    : 004c6b10
// Prototype: undefined8 * getText(float param_1, undefined8 * param_2)
// Body     : 004c6b10 - 004c6b87


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameter::getText(float, int) const */

undefined8 * __cdecl juce::AudioProcessorParameter::getText(float param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_88 [7];
  locale local_50 [8];
  byte local_48 [56];
  
                    /* try { // try from 004c6b23 to 004c6b31 has its CatchHandler @ 004c6bad */
  NumberToStringConverters::StackArrayStream::StackArrayStream
            ((StackArrayStream *)local_88,(long)local_48);
                    /* try { // try from 004c6b3c to 004c6b4c has its CatchHandler @ 004c6b88 */
  lVar1 = NumberToStringConverters::StackArrayStream::writeDouble
                    ((double)param_1,(StackArrayStream *)local_88,2,'\0');
  local_88[0] = PTR_vtable_00715ca8 + 0x10;
  std::locale::~locale(local_50);
  uVar2 = StringHolderUtils::createFromFixedLength(local_48,lVar1);
  *param_2 = uVar2;
  return param_2;
}


