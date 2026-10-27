// Function : loadProgram
// Namespace: VST3:_anonymous_namespace_
// Entry    : 0018fe10
// Prototype: undefined loadProgram((anonymous_namespace) * this, undefined8 * param_1, int * param_2, undefined8 param_3, ulong param_4, undefined8 param_5)
// Body     : 0018fe10 - 001905aa


/* WARNING: Type propagation algorithm not settling */
/* VST3::(anonymous namespace)::loadProgram(VST3::(anonymous namespace)::IO::ByteOrderStream<1u>
   const&, VST3::Optional<int> const&) */

void __thiscall
VST3::(anonymous_namespace)::loadProgram
          (_anonymous_namespace_ *this,undefined8 *param_1,int *param_2,undefined8 param_3,
          ulong param_4,undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  long lVar13;
  undefined1 local_d6 [2];
  undefined1 local_d4 [3];
  undefined1 uStack_d1;
  undefined1 local_d0 [3];
  undefined1 uStack_cd;
  undefined1 local_cc [3];
  undefined1 auStack_c9 [9];
  uint local_c0;
  int local_bc;
  uint local_b8 [7];
  undefined1 local_9c;
  undefined4 local_8c;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  
  local_50 = local_40;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  pvStack_70 = (void *)0x0;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_b8[0] = 0;
                    /* try { // try from 0018fe7a to 0018fe8e has its CatchHandler @ 001905e2 */
  puVar11 = (undefined4 *)local_cc;
  iVar4 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,puVar11,4);
  uVar12 = 0;
  if (iVar4 == 0) {
    uVar12 = local_b8[0];
  }
  if (1 < uVar12) {
    uVar5 = (ulong)(int)uVar12;
    param_4 = uVar5 - 2;
    uVar12 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
    if ((uVar12 & 3) == 0) {
      puVar8 = (undefined1 *)((long)local_d0 + uVar5 + 3);
    }
    else {
      lVar10 = uVar5 - 1;
      lVar1 = 0;
      do {
        lVar13 = lVar1;
        lVar7 = lVar10;
        uVar3 = *(undefined1 *)((long)local_cc + lVar13);
        *(undefined1 *)((long)local_cc + lVar13) = *(undefined1 *)((long)local_cc + lVar7);
        *(undefined1 *)((long)local_cc + lVar7) = uVar3;
        lVar10 = lVar7 + -2;
        lVar1 = lVar13 + 2;
      } while (((ulong)uVar12 & 3) * 2 != lVar13 + 2);
      puVar8 = (undefined1 *)((long)local_d0 + lVar7 + 2);
      uVar5 = lVar7 - 1;
      puVar11 = (undefined4 *)((long)local_cc + lVar13 + 2);
    }
    if (5 < param_4) {
      do {
        uVar3 = *(undefined1 *)puVar11;
        *(undefined1 *)puVar11 = *puVar8;
        *puVar8 = uVar3;
        uVar3 = *(undefined1 *)((long)puVar11 + 2);
        *(undefined1 *)((long)puVar11 + 2) = puVar8[-2];
        puVar8[-2] = uVar3;
        uVar3 = *(undefined1 *)(puVar11 + 1);
        *(undefined1 *)(puVar11 + 1) = puVar8[-4];
        puVar8[-4] = uVar3;
        uVar3 = *(undefined1 *)((long)puVar11 + 6);
        *(undefined1 *)((long)puVar11 + 6) = puVar8[-6];
        puVar8[-6] = uVar3;
        uVar5 = uVar5 - 8;
        puVar11 = puVar11 + 2;
        puVar8 = puVar8 + -8;
      } while (1 < uVar5);
    }
  }
  if ((iVar4 != 0) || (_local_cc != 0x43636e4b)) goto LAB_001901f0;
  local_b8[0] = 0;
                    /* try { // try from 0018ff80 to 0018ff94 has its CatchHandler @ 001905da */
  puVar8 = (undefined1 *)((long)auStack_c9 + 5);
  iVar4 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,puVar8,4);
  uVar12 = 0;
  if (iVar4 == 0) {
    uVar12 = local_b8[0];
  }
  if (1 < uVar12) {
    uVar6 = (ulong)(int)uVar12;
    uVar5 = uVar6 - 2;
    uVar12 = ((uint)(uVar5 >> 1) & 0x7fffffff) + 1;
    if ((uVar12 & 3) == 0) {
      puVar9 = (undefined1 *)((long)auStack_c9 + uVar6 + 4);
    }
    else {
      lVar10 = uVar6 - 1;
      lVar1 = 0;
      do {
        lVar13 = lVar1;
        lVar7 = lVar10;
        uVar3 = *(undefined1 *)((long)auStack_c9 + lVar13 + 5U);
        *(undefined1 *)((long)auStack_c9 + lVar13 + 5U) =
             *(undefined1 *)((long)auStack_c9 + lVar7 + 5U);
        *(undefined1 *)((long)auStack_c9 + lVar7 + 5U) = uVar3;
        lVar10 = lVar7 + -2;
        lVar1 = lVar13 + 2;
      } while (((ulong)uVar12 & 3) * 2 != lVar13 + 2);
      puVar9 = (undefined1 *)((long)auStack_c9 + lVar7 + 3U);
      uVar6 = lVar7 - 1;
      puVar8 = (undefined1 *)((long)auStack_c9 + lVar13 + 7U);
    }
    if (5 < uVar5) {
      do {
        uVar3 = *puVar8;
        *puVar8 = *puVar9;
        *puVar9 = uVar3;
        uVar3 = puVar8[2];
        puVar8[2] = puVar9[-2];
        puVar9[-2] = uVar3;
        uVar3 = puVar8[4];
        puVar8[4] = puVar9[-4];
        puVar9[-4] = uVar3;
        uVar3 = puVar8[6];
        puVar8[6] = puVar9[-6];
        puVar9[-6] = uVar3;
        uVar6 = uVar6 - 8;
        puVar8 = puVar8 + 8;
        puVar9 = puVar9 + -8;
      } while (1 < uVar6);
    }
  }
  if (iVar4 != 0) goto LAB_00190068;
  local_b8[0] = 0;
                    /* try { // try from 001900e7 to 001900fb has its CatchHandler @ 001905d2 */
  puVar11 = (undefined4 *)local_d0;
  iVar4 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,puVar11,4);
  uVar12 = 0;
  if (iVar4 == 0) {
    uVar12 = local_b8[0];
  }
  if (1 < uVar12) {
    uVar5 = (ulong)(int)uVar12;
    param_4 = uVar5 - 2;
    uVar12 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
    if ((uVar12 & 3) == 0) {
      puVar8 = (undefined1 *)((long)local_d4 + uVar5 + 3);
    }
    else {
      lVar10 = uVar5 - 1;
      lVar1 = 0;
      do {
        lVar13 = lVar1;
        lVar7 = lVar10;
        uVar3 = *(undefined1 *)((long)local_d0 + lVar13);
        *(undefined1 *)((long)local_d0 + lVar13) = *(undefined1 *)((long)local_d0 + lVar7);
        *(undefined1 *)((long)local_d0 + lVar7) = uVar3;
        lVar10 = lVar7 + -2;
        lVar1 = lVar13 + 2;
      } while (((ulong)uVar12 & 3) * 2 != lVar13 + 2);
      puVar8 = (undefined1 *)((long)local_d4 + lVar7 + 2);
      uVar5 = lVar7 - 1;
      puVar11 = (undefined4 *)((long)local_d0 + lVar13 + 2);
    }
    if (5 < param_4) {
      do {
        uVar3 = *(undefined1 *)puVar11;
        *(undefined1 *)puVar11 = *puVar8;
        *puVar8 = uVar3;
        uVar3 = *(undefined1 *)((long)puVar11 + 2);
        *(undefined1 *)((long)puVar11 + 2) = puVar8[-2];
        puVar8[-2] = uVar3;
        uVar3 = *(undefined1 *)(puVar11 + 1);
        *(undefined1 *)(puVar11 + 1) = puVar8[-4];
        puVar8[-4] = uVar3;
        uVar3 = *(undefined1 *)((long)puVar11 + 6);
        *(undefined1 *)((long)puVar11 + 6) = puVar8[-6];
        puVar8[-6] = uVar3;
        uVar5 = uVar5 - 8;
        puVar11 = puVar11 + 2;
        puVar8 = puVar8 + -8;
      } while (1 < uVar5);
    }
  }
  if ((iVar4 == 0) && ((_local_d0 == 0x46504368 || (_local_d0 == 0x4678436b)))) {
    local_b8[0] = 0;
                    /* try { // try from 00190292 to 001902a6 has its CatchHandler @ 001905ca */
    puVar8 = (undefined1 *)((long)auStack_c9 + 1);
    iVar4 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,puVar8,4);
    uVar12 = 0;
    if (iVar4 == 0) {
      uVar12 = local_b8[0];
    }
    if (1 < uVar12) {
      uVar5 = (ulong)(int)uVar12;
      param_4 = uVar5 - 2;
      uVar12 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
      if ((uVar12 & 3) == 0) {
        puVar9 = (undefined1 *)((long)auStack_c9 + uVar5);
      }
      else {
        lVar10 = uVar5 - 1;
        lVar1 = 0;
        do {
          lVar13 = lVar1;
          lVar7 = lVar10;
          uVar3 = *(undefined1 *)((long)auStack_c9 + lVar13 + 1U);
          *(undefined1 *)((long)auStack_c9 + lVar13 + 1U) =
               *(undefined1 *)((long)auStack_c9 + lVar7 + 1U);
          *(undefined1 *)((long)auStack_c9 + lVar7 + 1U) = uVar3;
          lVar10 = lVar7 + -2;
          lVar1 = lVar13 + 2;
        } while (((ulong)uVar12 & 3) * 2 != lVar13 + 2);
        puVar9 = (undefined1 *)((long)local_cc + lVar7 + 2);
        uVar5 = lVar7 - 1;
        puVar8 = (undefined1 *)((long)auStack_c9 + lVar13 + 3U);
      }
      if (5 < param_4) {
        do {
          uVar3 = *puVar8;
          *puVar8 = *puVar9;
          *puVar9 = uVar3;
          uVar3 = puVar8[2];
          puVar8[2] = puVar9[-2];
          puVar9[-2] = uVar3;
          uVar3 = puVar8[4];
          puVar8[4] = puVar9[-4];
          puVar9[-4] = uVar3;
          uVar3 = puVar8[6];
          puVar8[6] = puVar9[-6];
          puVar9[-6] = uVar3;
          uVar5 = uVar5 - 8;
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + -8;
        } while (1 < uVar5);
      }
    }
    if (iVar4 != 0) goto LAB_001901f0;
    local_b8[0] = 0;
                    /* try { // try from 0019037d to 00190391 has its CatchHandler @ 001905c2 */
    puVar11 = (undefined4 *)local_d4;
    iVar4 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,puVar11,4);
    uVar5 = 0;
    if (iVar4 == 0) {
      uVar5 = (ulong)local_b8[0];
    }
    if (1 < (uint)uVar5) {
      uVar5 = (ulong)(int)(uint)uVar5;
      param_4 = uVar5 - 2;
      uVar12 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
      if ((uVar12 & 3) == 0) {
        puVar8 = local_d6 + uVar5 + 1;
      }
      else {
        lVar10 = uVar5 - 1;
        lVar1 = 0;
        do {
          lVar13 = lVar1;
          lVar7 = lVar10;
          uVar3 = *(undefined1 *)((long)local_d4 + lVar13);
          *(undefined1 *)((long)local_d4 + lVar13) = *(undefined1 *)((long)local_d4 + lVar7);
          *(undefined1 *)((long)local_d4 + lVar7) = uVar3;
          lVar10 = lVar7 + -2;
          lVar1 = lVar13 + 2;
        } while (((ulong)uVar12 & 3) * 2 != lVar13 + 2);
        puVar8 = local_d6 + lVar7;
        uVar5 = lVar7 - 1;
        puVar11 = (undefined4 *)((long)local_d4 + lVar13 + 2);
      }
      if (5 < param_4) {
        do {
          uVar3 = *(undefined1 *)puVar11;
          *(undefined1 *)puVar11 = *puVar8;
          *puVar8 = uVar3;
          uVar3 = *(undefined1 *)((long)puVar11 + 2);
          *(undefined1 *)((long)puVar11 + 2) = puVar8[-2];
          puVar8[-2] = uVar3;
          uVar3 = *(undefined1 *)(puVar11 + 1);
          *(undefined1 *)(puVar11 + 1) = puVar8[-4];
          puVar8[-4] = uVar3;
          uVar3 = *(undefined1 *)((long)puVar11 + 6);
          *(undefined1 *)((long)puVar11 + 6) = puVar8[-6];
          puVar8[-6] = uVar3;
          uVar5 = uVar5 - 8;
          puVar11 = puVar11 + 2;
          puVar8 = puVar8 + -8;
        } while (1 < uVar5);
      }
    }
    if (((iVar4 != 0) ||
        ((((char)param_2[1] != '\0' && (_local_d4 != *param_2)) ||
         (bVar2 = IO::ByteOrderStream<1u>::operator>>
                            ((ByteOrderStream<1u> *)*param_1,(undefined1 *)&local_8c),
         (int)CONCAT71(extraout_var,bVar2) != 0)))) ||
       (((bVar2 = IO::ByteOrderStream<1u>::operator>>
                            ((ByteOrderStream<1u> *)*param_1,(undefined1 *)&local_bc),
         (int)CONCAT71(extraout_var_00,bVar2) != 0 || (local_bc < 0)) ||
        (uVar3 = IO::ByteOrderStream<1u>::read((long *)*param_1,0x1c,local_b8,uVar5,param_4,param_5)
        , (int)CONCAT71(extraout_var_01,uVar3) != 0)))) goto LAB_001901f0;
    local_9c = 0;
                    /* try { // try from 001904ca to 001904d3 has its CatchHandler @ 001905ad */
    std::__cxx11::string::operator=((string *)&local_50,(char *)local_b8);
    local_58 = CONCAT44(local_8c,_local_d4);
    if (_local_d0 == 0x46504368) {
      bVar2 = IO::ByteOrderStream<1u>::operator>>
                        ((ByteOrderStream<1u> *)*param_1,(undefined1 *)&local_c0);
      if ((int)CONCAT71(extraout_var_02,bVar2) == 0) {
                    /* try { // try from 00190512 to 00190516 has its CatchHandler @ 001905ab */
        std::vector<signed_char,std::allocator<signed_char>>::resize
                  ((vector<signed_char,std::allocator<signed_char>> *)&pvStack_70,(ulong)local_c0);
        uVar3 = IO::ByteOrderStream<1u>::read
                          ((long *)*param_1,(ulong)local_c0,pvStack_70,uVar5,param_4,param_5);
        if ((int)CONCAT71(extraout_var_03,uVar3) == 0) goto LAB_00190580;
      }
LAB_00190068:
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(_anonymous_namespace_ **)(this + 0x38) = this + 0x48;
      *(undefined8 *)(this + 0x40) = 0;
      this[0x48] = (_anonymous_namespace_)0x0;
      this[0x58] = (_anonymous_namespace_)0x0;
      if (local_50 == local_40) goto LAB_0019023e;
    }
    else {
                    /* try { // try from 00190537 to 00190540 has its CatchHandler @ 001905ad */
      std::vector<float,std::allocator<float>>::resize
                ((vector<float,std::allocator<float>> *)&local_88,(long)local_bc);
      if (0 < local_bc) {
        lVar10 = 0;
        do {
          bVar2 = IO::ByteOrderStream<1u>::operator>>
                            ((ByteOrderStream<1u> *)*param_1,(undefined1 *)&local_c0);
          if ((int)CONCAT71(extraout_var_04,bVar2) != 0) goto LAB_00190068;
          *(uint *)((long)local_88 + lVar10 * 4) = local_c0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < local_bc);
      }
LAB_00190580:
      Optional<VST3::Vst2xProgram>::Optional((Optional<VST3::Vst2xProgram> *)this,&local_88);
      if (local_50 == local_40) goto LAB_0019023e;
    }
  }
  else {
LAB_001901f0:
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(_anonymous_namespace_ **)(this + 0x38) = this + 0x48;
    *(undefined8 *)(this + 0x40) = 0;
    this[0x48] = (_anonymous_namespace_)0x0;
    this[0x58] = (_anonymous_namespace_)0x0;
    if (local_50 == local_40) goto LAB_0019023e;
  }
  operator_delete(local_50);
LAB_0019023e:
  if (pvStack_70 != (void *)0x0) {
    operator_delete(pvStack_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete(local_88);
  }
  return;
}


