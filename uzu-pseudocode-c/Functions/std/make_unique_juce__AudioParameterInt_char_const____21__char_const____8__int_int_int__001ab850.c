// Function : make_unique<juce::AudioParameterInt,char_const(&)[21],char_const(&)[8],int,int,int>
// Namespace: std
// Entry    : 001ab850
// Prototype: undefined8 * make_unique<juce::AudioParameterInt,char_const(&)[21],char_const(&)[8],int,int,int>(undefined8 * param_1, byte * param_2, byte * param_3, int * param_4, int * param_5, int * param_6)
// Body     : 001ab850 - 001ab998


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__detail::_MakeUniq<juce::AudioParameterInt>::__single_object
   std::make_unique<juce::AudioParameterInt, char const (&) [21], char const (&) [8], int, int,
   int>(char const (&) [21], char const (&) [8], int&&, int&&, int&&) */

undefined8 * __cdecl
std::make_unique<juce::AudioParameterInt,char_const(&)[21],char_const(&)[8],int,int,int>
          (undefined8 *param_1,byte *param_2,byte *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  AudioParameterInt *pAVar4;
  undefined8 *puVar5;
  String local_b0 [8];
  AudioParameterInt *local_a8;
  String local_a0 [8];
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined8 uStack_40;
  
  local_a8 = operator_new(0x140);
                    /* try { // try from 001ab882 to 001ab88e has its CatchHandler @ 001ab9d1 */
  juce::String::String(local_a0,param_2);
  local_98 = 0;
                    /* try { // try from 001ab89c to 001ab8a8 has its CatchHandler @ 001ab9c2 */
  local_90 = param_1;
  juce::String::String(local_b0,param_3);
  iVar1 = *param_4;
  iVar2 = *param_5;
  iVar3 = *param_6;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  juce::String::String((String *)&local_88);
  pAVar4 = local_a8;
  uStack_80 = CONCAT17((char)((ulong)uStack_80 >> 0x38),0x10000000000);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (code *)0x0;
  uStack_40 = 0;
                    /* try { // try from 001ab908 to 001ab92b has its CatchHandler @ 001ab9a9 */
  juce::AudioParameterInt::AudioParameterInt
            (local_a8,(long *)local_a0,(long *)local_b0,iVar1,iVar2,iVar3,(long *)&local_88);
  puVar5 = local_90;
  *local_90 = pAVar4;
  if (local_48 != (code *)0x0) {
                    /* try { // try from 001ab943 to 001ab94c has its CatchHandler @ 001ab9a1 */
    (*local_48)(&local_58,&local_58,3);
  }
  if (local_68 != (code *)0x0) {
                    /* try { // try from 001ab95c to 001ab965 has its CatchHandler @ 001ab999 */
    (*local_68)(&local_78,&local_78,3);
  }
  juce::String::~String((String *)&local_88);
  juce::String::~String(local_b0);
  juce::String::~String(local_a0);
  return puVar5;
}


