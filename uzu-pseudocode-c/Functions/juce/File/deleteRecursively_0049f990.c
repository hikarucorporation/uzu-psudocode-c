// Function : deleteRecursively
// Namespace: juce:File
// Entry    : 0049f990
// Prototype: byte deleteRecursively(File * this, undefined4 param_1)
// Body     : 0049f990 - 004a01cb


/* WARNING: Removing unreachable block (ram,0x0049fe24) */
/* juce::File::deleteRecursively(bool) const */

byte __thiscall juce::File::deleteRecursively(File *this,uint param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  byte bVar14;
  int iVar15;
  int *piVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  byte bVar25;
  undefined1 local_188 [16];
  undefined4 *local_178;
  uint local_16c;
  File *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long local_158;
  undefined1 local_150 [16];
  __nlink_t local_140;
  long *local_138;
  long local_130;
  __dev_t _Stack_128;
  undefined8 uStack_115;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 *local_e8;
  undefined8 uStack_e0;
  undefined3 local_d8;
  undefined5 uStack_d5;
  undefined8 uStack_d0;
  undefined3 local_c8;
  undefined5 uStack_c5;
  stat64 local_c0;
  
  if (**(char **)this == '\0') {
    bVar25 = 1;
    goto LAB_004a0188;
  }
  iVar15 = stat64(*(char **)this,&local_c0);
  bVar25 = 1;
  if (((iVar15 != 0) || ((local_c0.st_mode & 0x4000) == 0)) ||
     (((char)param_1 == '\0' && (bVar13 = isSymbolicLink(*(File **)this), bVar13))))
  goto LAB_004a0188;
  local_16c = param_1;
  local_178 = operator_new__(0x1b);
  LOCK();
  *local_178 = 0;
  UNLOCK();
  *(undefined8 *)(local_178 + 2) = 4;
  *(undefined2 *)(local_178 + 4) = 0x2a;
  local_178 = local_178 + 4;
  local_188 = (undefined1  [16])0x0;
                    /* try { // try from 0049fa27 to 0049fa49 has its CatchHandler @ 004a01cc */
  RangedDirectoryIterator::RangedDirectoryIterator
            ((RangedDirectoryIterator *)&local_c0,(long *)this,(DirectoryIterator)0x0,
             (long *)&local_178,3,2);
  local_150._8_8_ = local_c0.st_ino;
  local_150._0_8_ = local_c0.st_dev;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_c0.st_ino !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_c0.st_ino + 8) = *(int *)(local_c0.st_ino + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_c0.st_ino + 8) = *(int *)(local_c0.st_ino + 8) + 1;
    }
  }
  local_138 = (long *)CONCAT44(local_c0.st_uid,local_c0.st_mode);
  local_140 = local_c0.st_nlink;
  if (local_138 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)((long)local_138 + 0xc) = *(int *)((long)local_138 + 0xc) + 1;
      UNLOCK();
    }
    else {
      *(int *)((long)local_138 + 0xc) = *(int *)((long)local_138 + 0xc) + 1;
    }
  }
  local_130._0_4_ = local_c0.st_gid;
  local_130._4_4_ = local_c0.__pad0;
  piVar16 = (int *)(local_c0._32_8_ + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    *piVar16 = *piVar16 + 1;
    UNLOCK();
  }
  uStack_115 = local_c0._59_8_;
  _Stack_128 = local_c0.st_rdev;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  uStack_c5 = 0;
  local_e8 = &DAT_0061ac58;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d5 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  if (local_c0.st_dev != 0) {
    local_168 = (File *)&DAT_0061ac58;
    uStack_160 = 0x61ac58;
    uStack_15c = 0;
    do {
      lVar21 = local_130;
      uVar9 = local_188._0_8_;
      auVar12 = (undefined1  [12])local_188._0_12_;
      piVar16 = (int *)(local_130 + -0x10);
      if (piVar16 != &emptyString) {
        LOCK();
        *piVar16 = *piVar16 + 1;
        UNLOCK();
      }
      uVar11 = local_188._12_4_;
      uVar18 = (ulong)(uint)local_188._12_4_;
      if ((int)local_188._8_4_ <= (int)local_188._12_4_) {
        uVar20 = local_188._12_4_ + (int)(local_188._12_4_ + 1) / 2 + 9U & 0xfffffff8;
        local_188._0_8_ = uVar9;
        if (local_188._8_4_ != uVar20) {
          if ((int)uVar20 < 1) {
            free((void *)uVar9);
            local_188._0_8_ = (void *)0x0;
          }
          else {
            pvVar17 = malloc((ulong)uVar20 << 3);
            if (0 < (int)local_188._12_4_) {
              if (((uint)local_188._12_4_ < 4) ||
                 ((pvVar17 < (void *)(uVar9 + uVar18 * 8) &&
                  ((ulong)uVar9 < (void *)((long)pvVar17 + uVar18 * 8))))) {
                uVar19 = 0;
              }
              else {
                uVar19 = (ulong)(local_188._12_4_ & 0xfffffffc);
                uVar22 = (uVar19 - 4 >> 2) + 1;
                if (uVar19 - 4 == 0) {
                  lVar24 = 0;
LAB_0049fdeb:
                  puVar2 = (undefined8 *)(uVar9 + lVar24 * 8);
                  uVar7 = puVar2[1];
                  puVar3 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x10);
                  uVar4 = *puVar3;
                  uVar5 = puVar3[1];
                  puVar3 = (undefined8 *)((long)pvVar17 + lVar24 * 8);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar7;
                  puVar2 = (undefined8 *)((long)pvVar17 + lVar24 * 8 + 0x10);
                  *puVar2 = uVar4;
                  puVar2[1] = uVar5;
                  puVar2 = (undefined8 *)(uVar9 + lVar24 * 8);
                  *puVar2 = local_168;
                  puVar2[1] = CONCAT44(uStack_15c,uStack_160);
                  puVar2 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x10);
                  *puVar2 = local_168;
                  puVar2[1] = CONCAT44(uStack_15c,uStack_160);
                }
                else {
                  uVar23 = uVar22 & 0xfffffffffffffffe;
                  lVar24 = 0;
                  uVar7 = CONCAT44(uStack_15c,uStack_160);
                  do {
                    puVar2 = (undefined8 *)(uVar9 + lVar24 * 8);
                    uVar4 = puVar2[1];
                    puVar3 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x10);
                    uVar5 = *puVar3;
                    uVar6 = puVar3[1];
                    puVar3 = (undefined8 *)((long)pvVar17 + lVar24 * 8);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar4;
                    puVar2 = (undefined8 *)((long)pvVar17 + lVar24 * 8 + 0x10);
                    *puVar2 = uVar5;
                    puVar2[1] = uVar6;
                    puVar2 = (undefined8 *)(uVar9 + lVar24 * 8);
                    *puVar2 = local_168;
                    puVar2[1] = uVar7;
                    puVar2 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x10);
                    *puVar2 = local_168;
                    puVar2[1] = uVar7;
                    puVar2 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x20);
                    uVar4 = puVar2[1];
                    puVar3 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x30);
                    uVar5 = *puVar3;
                    uVar6 = puVar3[1];
                    puVar3 = (undefined8 *)((long)pvVar17 + lVar24 * 8 + 0x20);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar4;
                    puVar2 = (undefined8 *)((long)pvVar17 + lVar24 * 8 + 0x30);
                    *puVar2 = uVar5;
                    puVar2[1] = uVar6;
                    puVar2 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x20);
                    *puVar2 = local_168;
                    puVar2[1] = uVar7;
                    puVar2 = (undefined8 *)(uVar9 + lVar24 * 8 + 0x30);
                    *puVar2 = local_168;
                    puVar2[1] = uVar7;
                    lVar24 = lVar24 + 8;
                    uVar23 = uVar23 - 2;
                  } while (uVar23 != 0);
                  if ((uVar22 & 1) != 0) goto LAB_0049fdeb;
                }
                if (uVar19 == uVar18) goto LAB_0049fccb;
              }
              uVar23 = ~uVar19;
              uVar22 = uVar18 & 3;
              if (((byte)local_188[0xc] & 3) != 0) {
                do {
                  *(undefined8 *)((long)pvVar17 + uVar19 * 8) = *(undefined8 *)(uVar9 + uVar19 * 8);
                  *(undefined1 **)(uVar9 + uVar19 * 8) = &DAT_0061ac58;
                  uVar19 = uVar19 + 1;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
              }
              if (2 < uVar23 + uVar18) {
                do {
                  *(undefined8 *)((long)pvVar17 + uVar19 * 8) = *(undefined8 *)(uVar9 + uVar19 * 8);
                  *(undefined1 **)(uVar9 + uVar19 * 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar17 + uVar19 * 8 + 8) =
                       *(undefined8 *)(uVar9 + uVar19 * 8 + 8);
                  *(undefined1 **)(uVar9 + uVar19 * 8 + 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar17 + uVar19 * 8 + 0x10) =
                       *(undefined8 *)(uVar9 + uVar19 * 8 + 0x10);
                  *(undefined1 **)(uVar9 + uVar19 * 8 + 0x10) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar17 + uVar19 * 8 + 0x18) =
                       *(undefined8 *)(uVar9 + uVar19 * 8 + 0x18);
                  *(undefined1 **)(uVar9 + uVar19 * 8 + 0x18) = &DAT_0061ac58;
                  uVar19 = uVar19 + 4;
                } while (uVar18 != uVar19);
              }
            }
LAB_0049fccb:
            free((void *)uVar9);
            local_188._0_8_ = pvVar17;
          }
        }
        local_188._8_4_ = uVar20;
        auVar12 = (undefined1  [12])local_188._0_12_;
      }
      local_188._0_12_ = auVar12;
      local_188._12_4_ = local_188._12_4_ + 1;
      auVar10 = local_188;
      *(long *)(local_188._0_8_ + (long)(int)uVar11 * 8) = lVar21;
                    /* try { // try from 0049fcf4 to 0049fcfd has its CatchHandler @ 004a01d1 */
      if ((local_150._0_8_ != 0) &&
         (uVar18 = RangedDirectoryIterator::next((RangedDirectoryIterator *)local_150),
         (char)uVar18 == '\0')) {
        uVar9 = local_150._8_8_;
        local_150 = (undefined1  [16])0x0;
        if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar9 !=
            (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (*(long *)(uVar9 + 8) == 0x100000001) {
            *(undefined8 *)(uVar9 + 8) = 0;
            (**(code **)(*(long *)uVar9 + 0x10))(uVar9);
            (**(code **)(*(long *)uVar9 + 0x18))(uVar9);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(uVar9 + 8);
              iVar15 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar15 = (int)*(long *)(uVar9 + 8);
              *(int *)(uVar9 + 8) = iVar15 + -1;
            }
            if (iVar15 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar9);
            }
          }
        }
      }
      local_188 = auVar10;
    } while (local_150._0_8_ != 0 || local_108._0_8_ != 0);
  }
  piVar16 = (int *)(local_e8 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar16);
    }
  }
  if ((long *)local_f8._8_8_ != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar16 = (int *)(local_f8._8_8_ + 0xc);
      iVar15 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
    }
    else {
      iVar15 = *(int *)(local_f8._8_8_ + 0xc);
      *(int *)(local_f8._8_8_ + 0xc) = iVar15 + -1;
    }
    if (iVar15 == 1) {
      (**(code **)(*(long *)local_f8._8_8_ + 0x18))();
    }
  }
  uVar9 = local_108._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_108._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar18 = *(ulong *)(local_108._8_8_ + 8);
    if (uVar18 == 0x100000001) {
      *(undefined8 *)(local_108._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_108._8_8_ + 0x10))(local_108._8_8_);
      (**(code **)(*(long *)uVar9 + 0x18))(uVar9);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_108._8_8_ + 8);
        uVar18 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(local_108._8_8_ + 8) = (int)uVar18 + -1;
      }
      if ((int)uVar18 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_108._8_8_);
      }
    }
  }
  piVar16 = (int *)(local_130 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar16);
    }
  }
  if (local_138 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar16 = (int *)((long)local_138 + 0xc);
      iVar15 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
    }
    else {
      iVar15 = *(int *)((long)local_138 + 0xc);
      *(int *)((long)local_138 + 0xc) = iVar15 + -1;
    }
    if (iVar15 == 1) {
      (**(code **)(*local_138 + 0x18))();
    }
  }
  uVar9 = local_150._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_150._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar18 = *(ulong *)(local_150._8_8_ + 8);
    if (uVar18 == 0x100000001) {
      *(undefined8 *)(local_150._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_150._8_8_ + 0x10))(local_150._8_8_);
      (**(code **)(*(long *)uVar9 + 0x18))(uVar9);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_150._8_8_ + 8);
        uVar18 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(local_150._8_8_ + 8) = (int)uVar18 + -1;
      }
      if ((int)uVar18 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_150._8_8_);
      }
    }
  }
  piVar16 = (int *)(local_c0._32_8_ + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar16);
    }
  }
  plVar8 = (long *)CONCAT44(local_c0.st_uid,local_c0.st_mode);
  if (plVar8 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar16 = (int *)((long)plVar8 + 0xc);
      iVar15 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
    }
    else {
      iVar15 = *(int *)((long)plVar8 + 0xc);
      *(int *)((long)plVar8 + 0xc) = iVar15 + -1;
    }
    if (iVar15 == 1) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_c0.st_ino !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar18 = *(ulong *)(local_c0.st_ino + 8);
    if (uVar18 == 0x100000001) {
      *(undefined8 *)(local_c0.st_ino + 8) = 0;
      (**(code **)(*(long *)local_c0.st_ino + 0x10))(local_c0.st_ino);
      (**(code **)(*(long *)local_c0.st_ino + 0x18))(local_c0.st_ino);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_c0.st_ino + 8);
        uVar18 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(local_c0.st_ino + 8) = (int)uVar18 + -1;
      }
      if ((int)uVar18 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_c0.st_ino);
      }
    }
  }
  piVar16 = local_178 + -4;
  local_168 = this;
  if (piVar16 == &emptyString) {
LAB_004a00a9:
    if (local_188._12_4_ != 0) goto LAB_004a00bb;
LAB_004a0178:
    bVar25 = 1;
    this = local_168;
  }
  else {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 != 0) goto LAB_004a00a9;
    operator_delete__(piVar16);
    if (local_188._12_4_ == 0) goto LAB_004a0178;
LAB_004a00bb:
    uVar20 = local_16c;
    local_158 = (long)(int)local_188._12_4_;
    lVar21 = local_158 * 8;
    bVar25 = 1;
    lVar24 = 0;
    do {
                    /* try { // try from 004a00e4 to 004a00eb has its CatchHandler @ 004a0233 */
      bVar14 = deleteRecursively((File *)(lVar24 + local_188._0_8_),uVar20 & 0xff);
      this = local_168;
      bVar25 = bVar14 & bVar25 != 0;
      lVar24 = lVar24 + 8;
    } while (lVar21 != lVar24);
    if (0 < (int)local_158) {
      lVar21 = 1;
      while( true ) {
        piVar16 = (int *)(*(long *)(local_188._0_8_ + lVar21 * 8 + -8) + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          iVar15 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar15 == 0) {
            operator_delete__(piVar16);
          }
        }
        if ((int)local_188._12_4_ <= lVar21) break;
        lVar21 = lVar21 + 1;
      }
    }
  }
  free((void *)local_188._0_8_);
LAB_004a0188:
  uVar18 = deleteFile(this);
  return (byte)uVar18 & bVar25;
}


