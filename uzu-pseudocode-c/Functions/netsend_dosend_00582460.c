// Function : netsend_dosend
// Namespace: 
// Entry    : 00582460
// Prototype: undefined4 netsend_dosend(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, double param_9, int param_10, uint param_11, undefined8 * param_12, sockaddr * param_13, undefined8 param_14)
// Body     : 00582460 - 005826f0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
netsend_dosend(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              double param_9,int param_10,uint param_11,undefined8 *param_12,sockaddr *param_13,
              undefined8 param_14)

{
  sockaddr *__addr;
  int *piVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  float fVar11;
  double dVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  int *local_58;
  undefined1 *local_50;
  int local_44;
  double local_40;
  uint local_34;
  
  local_44 = param_10;
  if (*(int *)((long)param_9 + 0x50) == 0) {
    uStack_70 = 0x582652;
    puVar5 = param_12;
    piVar4 = binbuf_new();
    uStack_70 = 0x582663;
    uVar13 = binbuf_add(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar4,param_11,param_12,puVar5,(char *)param_13,param_14);
    local_68._0_4_ = 4;
    local_60 = 0;
    uStack_70 = 0x582682;
    uVar13 = binbuf_add(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,1,
                        &local_68,puVar5,(char *)param_13,param_14);
    uStack_70 = 0x582692;
    binbuf_gettext(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,&local_50,
                   (int *)&local_34,puVar5,(char *)param_13,param_14);
    puVar5 = &local_68;
    piVar1 = local_58;
    puVar7 = local_50;
  }
  else {
    lVar6 = -((long)(int)param_11 + 0xfU & 0xfffffffffffffff0);
    puVar5 = (undefined8 *)((long)&local_68 + lVar6);
    local_50 = (undefined1 *)puVar5;
    local_40 = param_9;
    if (0 < (int)param_11) {
      *(undefined8 *)((long)&uStack_70 + lVar6) = 0x5824b5;
      fVar11 = (float)atom_getfloatarg(0,param_11,(long)param_12);
      *(char *)puVar5 = (char)(int)fVar11;
      puVar5 = (undefined8 *)((long)&local_68 + lVar6);
      if (param_11 != 1) {
        uVar10 = 1;
        do {
          puVar7 = local_50;
          *(undefined8 *)((long)&uStack_70 + lVar6) = 0x5824e1;
          fVar11 = (float)atom_getfloatarg((int)uVar10,param_11,(long)param_12);
          puVar7[uVar10] = (char)(int)fVar11;
          uVar10 = uVar10 + 1;
          puVar5 = (undefined8 *)((long)&local_68 + lVar6);
        } while (param_11 != uVar10);
      }
    }
    param_9 = local_40;
    piVar4 = (int *)0x0;
    piVar1 = local_58;
    puVar7 = local_50;
    local_34 = param_11;
  }
  local_58 = piVar4;
  if ((int)local_34 < 1) {
    uVar9 = 0;
    iVar8 = *(int *)((long)param_9 + 0x50);
    piVar4 = local_58;
    local_58 = piVar1;
  }
  else {
    __addr = (sockaddr *)((long)param_9 + 0x60);
    iVar8 = 0;
    local_50 = puVar7;
    do {
      *(undefined8 *)((long)puVar5 + -8) = 0x582525;
      local_40 = sys_getrealtime();
      iVar2 = local_44;
      if (*(int *)((long)param_9 + 0x4c) == 2) {
        param_14 = 0x10;
        if (__addr->sa_family == 10) {
          param_14 = 0x1c;
        }
        lVar6 = (long)(int)local_34;
        *(undefined8 *)((long)puVar5 + -8) = 0x582561;
        param_13 = __addr;
        sVar3 = sendto(iVar2,puVar7,lVar6 - iVar8,0,__addr,(socklen_t)param_14);
        iVar2 = (int)sVar3;
      }
      else {
        lVar6 = (long)(int)local_34;
        *(undefined8 *)((long)puVar5 + -8) = 0x582584;
        sVar3 = send(iVar2,puVar7,lVar6 - iVar8,0);
        iVar2 = (int)sVar3;
      }
      *(undefined8 *)((long)puVar5 + -8) = 0x58258c;
      dVar12 = sys_getrealtime();
      dVar15 = dVar12 - local_40;
      dVar14 = netsend_dosend_pleasewarn;
      if ((_DAT_0065c588 < dVar15) || (netsend_dosend_pleasewarn != DAT_005db340)) {
        param_3 = netsend_dosend_lastwarntime + _DAT_00653f50;
        if (dVar12 <= param_3) {
          if (_DAT_0065c588 < dVar15) {
            dVar14 = netsend_dosend_pleasewarn + dVar15;
            netsend_dosend_pleasewarn = dVar14;
          }
        }
        else {
          dVar15 = (dVar15 + netsend_dosend_pleasewarn) * DAT_006544a0;
          local_40 = dVar12;
          *(undefined8 *)((long)puVar5 + -8) = 0x5825f4;
          logpost(dVar12,netsend_dosend_pleasewarn,param_3,dVar15,param_5,param_6,param_7,param_8,0,
                  3,"netsend/netreceive: blocked %d msec",(ulong)(uint)(int)dVar15,param_13,param_14
                  ,*(undefined1 *)puVar5);
          netsend_dosend_pleasewarn = 0.0;
          netsend_dosend_lastwarntime = local_40;
          dVar12 = local_40;
        }
      }
      if (iVar2 < 1) {
        *(undefined8 *)((long)puVar5 + -8) = 0x5826b8;
        sys_sockerror(dVar12,dVar14,param_3,dVar15,param_5,param_6,param_7,param_8,"send");
        uVar9 = 1;
        goto LAB_005826be;
      }
      iVar8 = iVar8 + iVar2;
      puVar7 = puVar7 + iVar2;
    } while (iVar8 < (int)local_34);
    uVar9 = 0;
LAB_005826be:
    iVar8 = *(int *)((long)param_9 + 0x50);
    piVar4 = local_58;
    puVar7 = local_50;
  }
  if (iVar8 == 0) {
    local_50 = puVar7;
    *(undefined8 *)((long)puVar5 + -8) = 0x5826d7;
    freebytes(puVar7);
    *(undefined8 *)((long)puVar5 + -8) = 0x5826df;
    binbuf_free(piVar4);
  }
  return uVar9;
}


