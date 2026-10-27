// Function : isNonEmptyDirectory
// Namespace: juce:File
// Entry    : 004a02d0
// Prototype: ulong isNonEmptyDirectory(File * this)
// Body     : 004a02d0 - 004a0486


/* juce::File::isNonEmptyDirectory() const */

ulong __thiscall juce::File::isNonEmptyDirectory(File *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *local_b0;
  stat64 local_a8;
  
  if (**(char **)this == '\0') {
    uVar5 = 0;
    goto LAB_004a043a;
  }
  iVar3 = stat64(*(char **)this,&local_a8);
  uVar5 = 0;
  if ((iVar3 != 0) || ((local_a8.st_mode & 0x4000) == 0)) goto LAB_004a043a;
  puVar4 = operator_new__(0x1b);
  LOCK();
  *puVar4 = 0;
  UNLOCK();
  *(undefined8 *)(puVar4 + 2) = 4;
  *(undefined2 *)(puVar4 + 4) = 0x2a;
  local_b0 = puVar4 + 4;
                    /* try { // try from 004a0339 to 004a0358 has its CatchHandler @ 004a0487 */
  RangedDirectoryIterator::RangedDirectoryIterator
            ((RangedDirectoryIterator *)&local_a8,(long *)this,(DirectoryIterator)0x0,
             (long *)&local_b0,3,2);
  uVar5 = CONCAT71((int7)((ulong)puVar4 >> 8),local_a8.st_dev != 0);
  piVar6 = (int *)(local_a8._32_8_ + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar6);
    }
  }
  plVar2 = (long *)CONCAT44(local_a8.st_uid,local_a8.st_mode);
  if (plVar2 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar6 = (int *)((long)plVar2 + 0xc);
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    else {
      iVar3 = *(int *)((long)plVar2 + 0xc);
      *(int *)((long)plVar2 + 0xc) = iVar3 + -1;
    }
    if (iVar3 == 1) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_a8.st_ino ==
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_004a041a:
    piVar6 = local_b0 + -4;
    if (piVar6 == &emptyString) goto LAB_004a043a;
  }
  else if (*(long *)(local_a8.st_ino + 8) == 0x100000001) {
    *(undefined8 *)(local_a8.st_ino + 8) = 0;
    (**(code **)(*(long *)local_a8.st_ino + 0x10))(local_a8.st_ino);
    (**(code **)(*(long *)local_a8.st_ino + 0x18))(local_a8.st_ino);
    piVar6 = local_b0 + -4;
    if (piVar6 == &emptyString) goto LAB_004a043a;
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_a8.st_ino + 8);
      iVar3 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(local_a8.st_ino + 8);
      *(int *)(local_a8.st_ino + 8) = iVar3 + -1;
    }
    if (iVar3 != 1) goto LAB_004a041a;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_a8.st_ino);
    piVar6 = local_b0 + -4;
    if (piVar6 == &emptyString) goto LAB_004a043a;
  }
  LOCK();
  iVar3 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar3 == 0) {
    operator_delete__(piVar6);
  }
LAB_004a043a:
  return uVar5 & 0xffffffff;
}


