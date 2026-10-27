// Function : RangedDirectoryIterator
// Namespace: juce:RangedDirectoryIterator
// Entry    : 0049f210
// Prototype: undefined RangedDirectoryIterator(RangedDirectoryIterator * this, long * param_2, DirectoryIterator param_3, long * param_4, undefined4 param_5, int param_6)
// Body     : 0049f210 - 0049f3b8


/* juce::RangedDirectoryIterator::RangedDirectoryIterator(juce::File const&, bool, juce::String
   const&, int, juce::File::FollowSymlinks) */

void __thiscall
juce::RangedDirectoryIterator::RangedDirectoryIterator
          (RangedDirectoryIterator *this,long *param_2,DirectoryIterator param_3,long *param_4,
          undefined4 param_5,int param_6)

{
  int *piVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar4;
  undefined *puVar5;
  DirectoryIterator *this_01;
  undefined8 *puVar6;
  ulong uVar7;
  
  this_01 = operator_new(0x60);
                    /* try { // try from 0049f23e to 0049f25d has its CatchHandler @ 0049f40a */
  DirectoryIterator::DirectoryIterator
            (this_01,param_2,param_3,param_4,param_5,param_6,(undefined8 *)0x0);
  *(DirectoryIterator **)this = this_01;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 0049f269 to 0049f272 has its CatchHandler @ 0049f3d5 */
  puVar6 = operator_new(0x18);
  puVar6[1] = 0x100000001;
  *puVar6 = &PTR___Sp_counted_base_00713da8;
  puVar6[2] = this_01;
  *(undefined8 **)(this + 8) = puVar6;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x33) = 0;
  *(undefined8 *)(this + 0x3b) = 0;
  *(DirectoryIterator **)(this + 0x10) = this_01;
  puVar5 = PTR___libc_single_threaded_00715c50;
  if (*PTR___libc_single_threaded_00715c50 == '\0') {
    LOCK();
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(long **)(this + 0x18);
    if (plVar4 != (long *)0x0) {
      if (*puVar5 == '\0') {
        LOCK();
        piVar1 = (int *)((long)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)((long)plVar4 + 0xc);
        *(int *)((long)plVar4 + 0xc) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  else {
    *(undefined4 *)((long)puVar6 + 0xc) = 2;
  }
  *(undefined8 **)(this + 0x18) = puVar6;
                    /* try { // try from 0049f2df to 0049f2e6 has its CatchHandler @ 0049f3b9 */
  if ((*(long *)this != 0) && (uVar7 = next(this), (char)uVar7 == '\0')) {
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x0049f328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
        return;
      }
      if (*puVar5 == '\0') {
        LOCK();
        p_Var2 = this_00 + 8;
        iVar3 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar3 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        return;
      }
    }
  }
  return;
}


