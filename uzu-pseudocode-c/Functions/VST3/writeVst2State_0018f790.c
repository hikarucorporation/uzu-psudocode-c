// Function : writeVst2State
// Namespace: VST3
// Entry    : 0018f790
// Prototype: bool writeVst2State(long * param_1, ByteOrderStream<1u> * param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
// Body     : 0018f790 - 0018fce9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* VST3::writeVst2State(VST3::Vst2xState const&, Steinberg::IBStream&, bool) */

bool __cdecl
VST3::writeVst2State
          (long *param_1,ByteOrderStream<1u> *param_2,int param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar5;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined8 *puVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  undefined4 local_44;
  undefined8 local_40;
  ByteOrderStream<1u> *local_38;
  
  local_38 = param_2;
  if (param_3 != 0) {
    local_44 = 0x57747356;
    local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018f7c4 to 0018f7d8 has its CatchHandler @ 0018fd62 */
    iVar2 = (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_44,4,&local_40);
    if (iVar2 != 0) {
      return false;
    }
    local_40 = 0;
                    /* try { // try from 0018f7f2 to 0018f7f9 has its CatchHandler @ 0018fd52 */
    iVar2 = (**(code **)(*(long *)local_38 + 0x30))(local_38,&local_40);
    uVar9 = local_40;
    if ((long)local_40 < 0 || iVar2 != 0) {
      return false;
    }
    local_44 = 0;
    local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018f835 to 0018f846 has its CatchHandler @ 0018fd42 */
    iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
    if (iVar2 == 0) {
      local_44 = 0x1000000;
      local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018fb28 to 0018fb39 has its CatchHandler @ 0018fd32 */
      iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
      if (iVar2 != 0) {
        return false;
      }
      local_44 = (uint)*(byte *)((long)param_1 + 0x3c) << 0x18;
      local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018fb66 to 0018fb77 has its CatchHandler @ 0018fd22 */
      iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
      if (iVar2 != 0) {
        return false;
      }
      local_40 = 0;
                    /* try { // try from 0018fb91 to 0018fb98 has its CatchHandler @ 0018fd12 */
      iVar2 = (**(code **)(*(long *)local_38 + 0x30))();
      lVar8 = local_40;
      if ((long)local_40 < 0 || iVar2 != 0) {
        return false;
      }
      uVar5 = (local_40 - uVar9) - 4;
      local_40 = CONCAT44(local_40._4_4_,(int)uVar5);
      iVar2 = 1;
      if (uVar5 >> 0x20 == 0) {
        bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::seek(local_38,0,uVar9);
        iVar2 = (int)CONCAT71(extraout_var_01,bVar10);
        if (iVar2 == 0) {
          bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator<<
                             (local_38,(undefined1 *)&local_40);
          iVar2 = (int)CONCAT71(extraout_var_02,bVar10);
          if (iVar2 == 0) {
            bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::seek(local_38,0,lVar8);
            iVar2 = (int)CONCAT71(extraout_var_03,bVar10);
          }
        }
      }
    }
    else {
      iVar2 = 1;
    }
    if (iVar2 != 0) {
      return false;
    }
  }
  local_44 = 0x4b6e6343;
  local_40 = (ulong)local_40._4_4_ << 0x20;
                    /* try { // try from 0018f874 to 0018f888 has its CatchHandler @ 0018fd6a */
  iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
  if (iVar2 != 0) {
    return false;
  }
  local_40 = 0;
                    /* try { // try from 0018f8a5 to 0018f8ac has its CatchHandler @ 0018fd5a */
  iVar2 = (**(code **)(*(long *)local_38 + 0x30))(local_38,&local_40);
  uVar9 = 0;
  if (-1 < (long)local_40 && iVar2 == 0) {
    uVar9 = local_40;
  }
  iVar4 = 1;
  if (-1 < (long)local_40 && iVar2 == 0) {
    local_44 = 0;
    local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018f8e9 to 0018f8fa has its CatchHandler @ 0018fd4a */
    iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
    if (iVar2 == 0) {
      lVar8 = param_1[3];
      lVar1 = param_1[4];
      bVar10 = lVar8 == lVar1;
      uVar7 = 0x42;
      if (bVar10) {
        uVar7 = 0x78;
      }
      local_44 = CONCAT31((uint3)(ushort)(CONCAT11(bVar10,uVar7) ^ 0x4300),0x46);
      local_44 = CONCAT13(bVar10 * '\x03' + 'h',(undefined3)local_44);
      local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018f953 to 0018f964 has its CatchHandler @ 0018fd3a */
      iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
      if (iVar2 == 0) {
        local_44 = 0x2000000;
        local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018f985 to 0018f996 has its CatchHandler @ 0018fd2a */
        iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
        if (iVar2 == 0) {
          local_44 = CONCAT13((char)param_1[6],
                              CONCAT21(CONCAT11(*(undefined1 *)((long)param_1 + 0x31),
                                                *(undefined1 *)((long)param_1 + 0x32)),
                                       *(undefined1 *)((long)param_1 + 0x33)));
          local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018f9cf to 0018f9e0 has its CatchHandler @ 0018fd1a */
          iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
          if (iVar2 == 0) {
            local_44 = CONCAT13(*(undefined1 *)((long)param_1 + 0x34),
                                CONCAT21(CONCAT11(*(undefined1 *)((long)param_1 + 0x35),
                                                  *(undefined1 *)((long)param_1 + 0x36)),
                                         *(undefined1 *)((long)param_1 + 0x37)));
            local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018fa19 to 0018fa2a has its CatchHandler @ 0018fd0a */
            iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
            if (iVar2 == 0) {
              uVar3 = 1;
              if (lVar8 == lVar1) {
                uVar3 = (int)((ulong)(param_1[1] - *param_1) >> 3) * -0x45d1745d;
              }
              local_44 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18;
              local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018fa64 to 0018fa75 has its CatchHandler @ 0018fcfa */
              iVar2 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,4,&local_40);
              iVar4 = 1;
              if (iVar2 == 0) {
                bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator<<
                                   (local_38,(undefined1 *)(param_1 + 7));
                iVar4 = (int)CONCAT71(extraout_var,bVar10);
                if (iVar4 == 0) {
                  local_44 = local_44 & 0xffffff00;
                  iVar2 = 0x7c;
                  do {
                    local_40 = local_40 & 0xffffffff00000000;
                    /* try { // try from 0018fab2 to 0018fac1 has its CatchHandler @ 0018fd02 */
                    puVar6 = &local_40;
                    iVar4 = (**(code **)(*(long *)local_38 + 0x20))(local_38,&local_44,1);
                    if (iVar4 != 0) goto LAB_0018faf7;
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                  if (lVar8 == lVar1) {
                    /* try { // try from 0018fc23 to 0018fc2c has its CatchHandler @ 0018fcea */
                    (anonymous_namespace)::
                    writePrograms<VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>>
                              ((_anonymous_namespace_ *)&local_38,(long *)*param_1,
                               (long *)param_1[1]);
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)param_1[4] - (int)param_1[3]);
                    bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator<<
                                       (local_38,(undefined1 *)&local_40);
                    if ((int)CONCAT71(extraout_var_00,bVar10) != 0) {
LAB_0018faf7:
                      iVar4 = 1;
                      goto LAB_0018fafc;
                    }
                    (anonymous_namespace)::IO::ByteOrderStream<1u>::write
                              (&local_38,param_1[4] - param_1[3],param_1[3],puVar6,param_5,param_6);
                  }
                  local_40 = 0;
                    /* try { // try from 0018fc55 to 0018fc5c has its CatchHandler @ 0018fcf2 */
                  iVar2 = (**(code **)(*(long *)local_38 + 0x30))();
                  lVar8 = 0;
                  if (-1 < (long)local_40 && iVar2 == 0) {
                    lVar8 = local_40;
                  }
                  iVar4 = 1;
                  if (-1 < (long)local_40 && iVar2 == 0) {
                    local_40 = CONCAT44(local_40._4_4_,(int)(lVar8 - uVar9) + -4);
                    iVar4 = 1;
                    if ((lVar8 - uVar9) + 0x7ffffffc >> 0x20 == 0) {
                      bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::seek
                                         (local_38,0,uVar9);
                      iVar4 = (int)CONCAT71(extraout_var_04,bVar10);
                      if (iVar4 == 0) {
                        bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator<<
                                           (local_38,(undefined1 *)&local_40);
                        iVar4 = (int)CONCAT71(extraout_var_05,bVar10);
                        if (iVar4 == 0) {
                          bVar10 = (anonymous_namespace)::IO::ByteOrderStream<1u>::seek
                                             (local_38,0,lVar8);
                          iVar4 = (int)CONCAT71(extraout_var_06,bVar10);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar4 = 1;
    }
  }
LAB_0018fafc:
  return iVar4 == 0;
}


