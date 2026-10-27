// Function : netsend_readbin
// Namespace: 
// Entry    : 00581d50
// Prototype: undefined netsend_readbin(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong param_10, undefined8 param_11, undefined8 param_12, sockaddr * param_13, socklen_t * param_14, undefined1 param_15)
// Body     : 00581d50 - 0058216f


void netsend_readbin(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                    sockaddr *param_13,socklen_t *param_14,undefined1 param_15)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *__buf;
  ulong uVar10;
  undefined6 extraout_var;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  float *pfVar15;
  int iVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar17;
  float fVar18;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar21;
  ulong uVar19;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar20;
  char local_118 [48];
  sockaddr local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  float local_50;
  uint local_44;
  long *local_40;
  socklen_t local_38;
  uint local_34;
  
  uVar19 = param_10 & 0xffffffff;
  uVar10 = param_10;
  __buf = (void *)sys_getrecvbuf((undefined4 *)0x0);
  pcVar14 = local_118;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8.sa_family = 0;
  local_e8.sa_data[0] = '\0';
  local_e8.sa_data[1] = '\0';
  local_e8.sa_data[2] = '\0';
  local_e8.sa_data[3] = '\0';
  local_e8.sa_data[4] = '\0';
  local_e8.sa_data[5] = '\0';
  local_e8.sa_data[6] = '\0';
  local_e8.sa_data[7] = '\0';
  local_e8.sa_data[8] = '\0';
  local_e8.sa_data[9] = '\0';
  local_e8.sa_data[10] = '\0';
  local_e8.sa_data[0xb] = '\0';
  local_e8.sa_data[0xc] = '\0';
  local_e8.sa_data[0xd] = '\0';
  local_38 = 0x80;
  if (param_9[6] == 0) {
    bug(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"netsend_readbin",uVar10,
        extraout_RDX,param_12,(char *)param_13,param_14,param_15);
    return;
  }
  iVar9 = 0;
  local_34 = (uint)param_10;
  local_40 = param_9;
  while( true ) {
    iVar8 = (int)uVar19;
    if (*(int *)((long)param_9 + 0x4c) == 2) {
      lVar13 = 0;
      param_13 = &local_e8;
      param_14 = &local_38;
      *(undefined8 *)(pcVar14 + -8) = 0x581df4;
      uVar10 = recvfrom(iVar8,__buf,0x10000,0,param_13,param_14);
      iVar16 = (int)uVar10;
      uVar17 = extraout_XMM0_Da;
      uVar21 = extraout_XMM0_Db;
      uVar7 = local_34;
    }
    else {
      lVar13 = 0;
      *(undefined8 *)(pcVar14 + -8) = 0x581e21;
      uVar10 = recv(iVar8,__buf,0x10000,0);
      iVar16 = (int)uVar10;
      uVar17 = extraout_XMM0_Da_00;
      uVar21 = extraout_XMM0_Db_00;
      uVar7 = local_34;
    }
    local_34 = uVar7;
    if (iVar16 < 1) {
      uVar20 = CONCAT44(uVar21,uVar17);
      if ((uVar10 & 0x80000000) != 0) {
        if (*(int *)((long)param_9 + 0x4c) == 2) {
          *(undefined8 *)(pcVar14 + -8) = 0x581fd1;
          iVar9 = socket_errno_udp();
          uVar17 = extraout_XMM0_Da_03;
          uVar21 = extraout_XMM0_Db_03;
          if (iVar9 == 0) {
            return;
          }
        }
        *(undefined8 *)(pcVar14 + -8) = 0x581fe5;
        uVar20 = sys_sockerror(CONCAT44(uVar21,uVar17),param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,"recv (bin)");
      }
      if (*param_9 == netreceive_class) {
        if (*(int *)((long)param_9 + 0x4c) == 2) {
          return;
        }
        *(undefined8 *)(pcVar14 + -8) = 0x58215d;
        sys_rmpollfn(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar8);
        *(undefined8 *)(pcVar14 + -8) = 0x582164;
        uVar20 = sys_closesocket(iVar8);
        *(undefined8 *)(pcVar14 + -8) = 0x58216e;
        netreceive_notify(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_9,uVar19,extraout_RDX_00,lVar13,(char *)param_13,param_14,
                          *pcVar14);
        return;
      }
      lVar13 = param_9[9];
      if ((int)lVar13 < 0) {
        return;
      }
      *(undefined8 *)(pcVar14 + -8) = 0x582008;
      sys_rmpollfn(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int)lVar13);
      lVar13 = param_9[9];
      *(undefined8 *)(pcVar14 + -8) = 0x582012;
      sys_closesocket((int)lVar13);
      *(undefined4 *)(param_9 + 9) = 0xffffffff;
      puVar2 = (undefined8 *)param_9[0xb];
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(pcVar14 + -8) = 0x58202f;
        socketreceiver_free(puVar2);
      }
      param_9[0x19] = 0;
      param_9[0x1a] = 0;
      param_9[0x17] = 0;
      param_9[0x18] = 0;
      param_9[0x15] = 0;
      param_9[0x16] = 0;
      param_9[0x13] = 0;
      param_9[0x14] = 0;
      param_9[0x11] = 0;
      param_9[0x12] = 0;
      param_9[0xf] = 0;
      param_9[0x10] = 0;
      param_9[0xd] = 0;
      param_9[0xe] = 0;
      param_9[0xb] = 0;
      param_9[0xc] = 0;
      param_9[0x1b] = 0;
      plVar3 = (long *)param_9[3];
      *(undefined8 *)(pcVar14 + -8) = 0x582071;
      outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3);
      return;
    }
    plVar3 = (long *)param_9[8];
    if (*(int *)((long)param_9 + 0x4c) != 2) {
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(pcVar14 + -8) = 0x582092;
        iVar9 = getpeername(uVar7,&local_e8,&local_38);
        if (iVar9 == 0) {
          plVar3 = (long *)local_40[8];
          *(undefined8 *)(pcVar14 + -8) = 0x5820ad;
          uVar6 = sockaddr_get_port(&local_e8.sa_family);
          *(undefined8 *)(pcVar14 + -8) = 0x5820c4;
          pcVar11 = sockaddr_get_addrstr((short *)&local_e8,local_118,0x2e);
          if (pcVar11 != (char *)0x0) {
            local_68[0] = 2;
            *(undefined8 *)(pcVar14 + -8) = 0x5820dc;
            local_60 = gensym(local_118);
            local_58 = 1;
            local_50 = (float)uVar6;
            *(undefined8 *)(pcVar14 + -8) = 0x58210a;
            outlet_list((ulong)(uint)(float)uVar6,param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,plVar3,0,2,local_68,(char *)param_13,param_14);
          }
        }
      }
      plVar3 = local_40;
      uVar19 = 0;
      do {
        plVar4 = (long *)plVar3[6];
        bVar1 = *(byte *)((long)__buf + uVar19);
        *(undefined8 *)(pcVar14 + -8) = 0x582136;
        outlet_float((ulong)(uint)(float)bVar1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8,plVar4);
        uVar19 = uVar19 + 1;
      } while ((uVar10 & 0xffffffff) != uVar19);
      return;
    }
    if (plVar3 != (long *)0x0) {
      *(undefined8 *)(pcVar14 + -8) = 0x581e52;
      uVar6 = sockaddr_get_port(&local_e8.sa_family);
      local_44 = (uint)CONCAT62(extraout_var,uVar6);
      *(undefined8 *)(pcVar14 + -8) = 0x581e6c;
      pcVar11 = sockaddr_get_addrstr((short *)&local_e8,local_118,0x2e);
      uVar17 = extraout_XMM0_Da_01;
      uVar21 = extraout_XMM0_Db_01;
      if (pcVar11 != (char *)0x0) {
        local_68[0] = 2;
        *(undefined8 *)(pcVar14 + -8) = 0x581e80;
        local_60 = gensym(local_118);
        local_58 = 1;
        uVar7 = local_44 & 0xffff;
        local_50 = (float)uVar7;
        *(undefined8 *)(pcVar14 + -8) = 0x581eae;
        outlet_list((ulong)(uint)(float)uVar7,param_2,param_3,param_4,param_5,param_6,param_7,
                    param_8,plVar3,0,2,local_68,(char *)param_13,param_14);
        uVar17 = extraout_XMM0_Da_02;
        uVar21 = extraout_XMM0_Db_02;
      }
    }
    uVar19 = CONCAT44(uVar21,uVar17);
    if (0x10000 < (uint)uVar10) {
      *(undefined8 *)(pcVar14 + -8) = 0x581ecd;
      uVar19 = post(CONCAT44(uVar21,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "warning: incoming UDP packet truncated from %d to %d bytes.");
      uVar10 = 0x10000;
    }
    uVar7 = (uint)uVar10;
    pcVar14 = pcVar14 + (uVar10 & 0xffffffff) * -0x10;
    if (uVar7 == 1) {
      uVar12 = 0;
    }
    else {
      pfVar15 = (float *)(pcVar14 + 0x18);
      uVar12 = 0;
      do {
        pfVar15[-6] = 1.4013e-45;
        pfVar15[-4] = (float)*(byte *)((long)__buf + uVar12);
        pfVar15[-2] = 1.4013e-45;
        fVar18 = (float)*(byte *)((long)__buf + uVar12 + 1);
        uVar19 = (ulong)(uint)fVar18;
        *pfVar15 = fVar18;
        uVar12 = uVar12 + 2;
        pfVar15 = pfVar15 + 8;
      } while ((uVar7 & 0xfffffffe) != uVar12);
    }
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)(pcVar14 + uVar12 * 0x10) = 1;
      uVar19 = (ulong)(uint)(float)*(byte *)((long)__buf + uVar12);
      *(float *)(pcVar14 + uVar12 * 0x10 + 8) = (float)*(byte *)((long)__buf + uVar12);
    }
    param_9 = local_40;
    plVar3 = (long *)local_40[6];
    *(undefined8 *)(pcVar14 + -8) = 0x581f75;
    outlet_list(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,0,uVar7,
                pcVar14,(char *)param_13,param_14);
    uVar5 = local_34;
    iVar9 = iVar9 + uVar7;
    uVar19 = (ulong)local_34;
    if (0xffff < iVar9) break;
    *(undefined8 *)(pcVar14 + -8) = 0x581f92;
    iVar8 = socket_bytes_available(uVar5);
    if (iVar8 < 1) {
      return;
    }
  }
  return;
}


