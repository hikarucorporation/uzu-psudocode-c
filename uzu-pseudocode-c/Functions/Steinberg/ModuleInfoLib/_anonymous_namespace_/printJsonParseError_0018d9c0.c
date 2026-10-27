// Function : printJsonParseError
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_
// Entry    : 0018d9c0
// Prototype: undefined printJsonParseError(int * param_1, ostream * param_2)
// Body     : 0018d9c0 - 0018db54


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ModuleInfoLib::(anonymous namespace)::printJsonParseError(json_parse_result_s&,
   std::ostream&) */

void __cdecl
Steinberg::ModuleInfoLib::(anonymous_namespace)::printJsonParseError(int *param_1,ostream *param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  ostream *poVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  std::__ostream_insert<char,std::char_traits<char>>(param_2,"error  : ",9);
  uVar1 = *param_1 - 1;
  lVar3 = 0;
  pcVar4 = (char *)0x0;
  if (uVar1 < 0xb) {
    lVar3 = *(long *)(&DAT_005db2a0 + (long)(int)uVar1 * 8);
    pcVar4 = &DAT_005db2f8 + *(int *)(&DAT_005db2f8 + (long)(int)uVar1 * 4);
  }
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>(param_2,pcVar4,lVar3);
  uStack_18._0_5_ = CONCAT14(10,(undefined4)uStack_18);
  if (*(long *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) == 0) {
    std::ostream::put((char)poVar2);
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>(poVar2,(char *)((long)&uStack_18 + 4),1);
  }
  std::__ostream_insert<char,std::char_traits<char>>(param_2,"offset : ",9);
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)param_2);
  uStack_18._0_6_ = CONCAT15(10,(undefined5)uStack_18);
  if (*(long *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) == 0) {
    std::ostream::put((char)poVar2);
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>(poVar2,(char *)((long)&uStack_18 + 5),1);
  }
  std::__ostream_insert<char,std::char_traits<char>>(param_2,"line no: ",9);
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)param_2);
  uStack_18._0_7_ = CONCAT16(10,(undefined6)uStack_18);
  if (*(long *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) == 0) {
    std::ostream::put((char)poVar2);
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>(poVar2,(char *)((long)&uStack_18 + 6),1);
  }
  std::__ostream_insert<char,std::char_traits<char>>(param_2,"row no : ",9);
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)param_2);
  uStack_18 = CONCAT17(10,(undefined7)uStack_18);
  if (*(long *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) == 0) {
    std::ostream::put((char)poVar2);
    return;
  }
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,(char *)((long)&uStack_18 + 7),1);
  return;
}


