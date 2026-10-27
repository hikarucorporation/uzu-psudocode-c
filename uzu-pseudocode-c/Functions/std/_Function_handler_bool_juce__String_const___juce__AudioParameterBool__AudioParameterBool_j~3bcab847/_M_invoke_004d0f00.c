// Function : _M_invoke
// Namespace: std:_Function_handler_bool_juce__String_const___juce__AudioParameterBool__AudioParameterBool_j~3bcab847
// Entry    : 004d0f00
// Prototype: ulong _M_invoke(undefined8 param_1, undefined8 * param_2)
// Body     : 004d0f00 - 004d120c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<bool (juce::String const&),
   juce::AudioParameterBool::AudioParameterBool(juce::ParameterID const&, juce::String const&, bool,
   juce::AudioParameterBoolAttributes const&)::$_12>::_M_invoke(std::_Any_data const&, juce::String
   const&) */

ulong __cdecl
std::
_Function_handler<bool(juce::String_const&),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_12>
::_M_invoke(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 *unaff_RBP;
  long lVar6;
  byte *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  if (juce::AudioParameterBool::
      AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
      ::$_12::operator()(juce::String_const&)::onStrings == '\0') {
    iVar2 = __cxa_guard_acquire(&juce::AudioParameterBool::
                                 AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                                 ::$_12::operator()(juce::String_const&)::onStrings);
    if (iVar2 != 0) {
                    /* try { // try from 004d104a to 004d1058 has its CatchHandler @ 004d1298 */
      juce::translate((juce *)&local_48,(byte *)0x65d2e0);
      pbVar5 = local_48;
                    /* try { // try from 004d105d to 004d106d has its CatchHandler @ 004d126d */
      juce::translate((juce *)&local_40,&DAT_0065485b);
                    /* try { // try from 004d106e to 004d107e has its CatchHandler @ 004d1241 */
      juce::translate((juce *)&local_38,&DAT_005e640c);
                    /* try { // try from 004d107f to 004d1086 has its CatchHandler @ 004d120f */
      unaff_RBP = juce::StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar5);
      puVar3 = malloc(0x40);
      _DAT_0071d838 = 8;
      juce::AudioParameterBool::
      AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
      ::$_12::operator()(juce::String_const&)::onStrings = puVar3;
      *puVar3 = unaff_RBP;
      puVar3[1] = local_40;
      local_40 = &DAT_0061ac58;
      _DAT_0071d83c = 3;
      puVar3[2] = local_38;
      pbVar5 = pbVar5 + -0x10;
      if (pbVar5 != (byte *)&juce::emptyString) {
        LOCK();
        iVar2 = *(int *)pbVar5;
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(pbVar5);
        }
      }
      __cxa_atexit(juce::StringArray::~StringArray,
                   &juce::AudioParameterBool::
                    AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                    ::$_12::operator()(juce::String_const&)::onStrings,&__dso_handle);
      __cxa_guard_release(&juce::AudioParameterBool::
                           AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                           ::$_12::operator()(juce::String_const&)::onStrings);
    }
  }
  if ((juce::AudioParameterBool::
       AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
       ::$_12::operator()(juce::String_const&)::offStrings == '\0') &&
     (iVar2 = __cxa_guard_acquire(&juce::AudioParameterBool::
                                   AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                                   ::$_12::operator()(juce::String_const&)::offStrings), iVar2 != 0)
     ) {
                    /* try { // try from 004d1137 to 004d1145 has its CatchHandler @ 004d123f */
    juce::translate((juce *)&local_48,(byte *)0x65d2d4);
    pbVar5 = local_48;
                    /* try { // try from 004d114a to 004d115a has its CatchHandler @ 004d123d */
    juce::translate((juce *)&local_40,&DAT_0065efc5);
                    /* try { // try from 004d115b to 004d116b has its CatchHandler @ 004d123b */
    juce::translate((juce *)&local_38,(byte *)"false");
                    /* try { // try from 004d116c to 004d1173 has its CatchHandler @ 004d120d */
    unaff_RBP = juce::StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar5);
    puVar3 = malloc(0x40);
    _DAT_0071d850 = 8;
    juce::AudioParameterBool::
    AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
    ::$_12::operator()(juce::String_const&)::offStrings = puVar3;
    *puVar3 = unaff_RBP;
    puVar3[1] = local_40;
    local_40 = &DAT_0061ac58;
    DAT_0071d854 = 3;
    puVar3[2] = local_38;
    pbVar5 = pbVar5 + -0x10;
    if (pbVar5 != (byte *)&juce::emptyString) {
      LOCK();
      iVar2 = *(int *)pbVar5;
      *(int *)pbVar5 = *(int *)pbVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(pbVar5);
      }
    }
    __cxa_atexit(juce::StringArray::~StringArray,
                 &juce::AudioParameterBool::
                  AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                  ::$_12::operator()(juce::String_const&)::offStrings,&__dso_handle);
    __cxa_guard_release(&juce::AudioParameterBool::
                         AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                         ::$_12::operator()(juce::String_const&)::offStrings);
  }
  juce::String::toLowerCase(&local_48,param_2);
  pbVar5 = local_48;
  puVar3 = juce::AudioParameterBool::
           AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
           ::$_12::operator()(juce::String_const&)::onStrings;
  lVar6 = (long)_DAT_0071d83c;
  if (lVar6 != 0) {
    lVar4 = 0;
    do {
      unaff_RBP = (undefined4 *)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if ((pbVar5 == *(byte **)((long)puVar3 + lVar4)) ||
         (uVar1 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            (pbVar5,*(byte **)((long)puVar3 + lVar4)), uVar1 == 0))
      goto LAB_004d0fe7;
      lVar4 = lVar4 + 8;
    } while (lVar6 * 8 != lVar4);
  }
  puVar3 = juce::AudioParameterBool::
           AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
           ::$_12::operator()(juce::String_const&)::offStrings;
  lVar6 = 0;
  if ((long)DAT_0071d854 == 0) {
LAB_004d0fbe:
    lVar4 = strtol((char *)*param_2,(char **)0x0,10);
    unaff_RBP = (undefined4 *)CONCAT71((int7)((ulong)lVar6 >> 8),(int)lVar4 != 0);
    local_48 = local_48 + -0x10;
    if (local_48 != (byte *)&juce::emptyString) {
LAB_004d0ff7:
      LOCK();
      iVar2 = *(int *)local_48;
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(local_48);
      }
    }
LAB_004d100e:
    return (ulong)unaff_RBP & 0xffffffff;
  }
  lVar6 = (long)DAT_0071d854 * 8;
  lVar4 = 0;
LAB_004d0fa0:
  if (local_48 == *(byte **)((long)puVar3 + lVar4)) {
    unaff_RBP = (undefined4 *)0x0;
    pbVar5 = local_48;
LAB_004d0fe7:
    local_48 = pbVar5 + -0x10;
    if (local_48 == (byte *)&juce::emptyString) goto LAB_004d100e;
    goto LAB_004d0ff7;
  }
  uVar1 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_48,*(byte **)((long)puVar3 + lVar4));
  if (uVar1 != 0) goto code_r0x004d0fb5;
  unaff_RBP = (undefined4 *)0x0;
  local_48 = local_48 + -0x10;
  if (local_48 == (byte *)&juce::emptyString) goto LAB_004d100e;
  goto LAB_004d0ff7;
code_r0x004d0fb5:
  lVar4 = lVar4 + 8;
  if (lVar6 == lVar4) goto LAB_004d0fbe;
  goto LAB_004d0fa0;
}


