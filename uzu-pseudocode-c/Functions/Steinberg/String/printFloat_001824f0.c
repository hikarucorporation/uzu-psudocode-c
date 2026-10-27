// Function : printFloat
// Namespace: Steinberg:String
// Entry    : 001824f0
// Prototype: String * printFloat(double param_1, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * this, uint param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 001824f0 - 00182909


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::String::printFloat(double, unsigned int) */

String * __thiscall
Steinberg::String::printFloat
          (double param_1,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,String *this,
          uint param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  short *psVar1;
  String SVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar12;
  double dVar13;
  ulong in_XMM0_Qb;
  double dVar14;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  ulong uVar15;
  undefined1 in_stack_ffffffffffffff98;
  undefined2 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  ulong uStack_50;
  double local_48;
  ulong uStack_40;
  
  local_58 = param_1;
  if ((param_1 <= DAT_005db328) && (_DAT_005db330 <= param_1)) {
    uStack_50 = in_XMM0_Qb;
    dVar13 = round(param_1);
    if (param_10 != 0) {
      in_XMM0_Qb = uStack_50;
      if ((dVar13 != local_58) || (NAN(dVar13) || NAN(local_58))) goto LAB_00182548;
    }
    if (((byte)this[0x13] & 0x40) == 0) {
      printf(dVar13,local_58,param_3,param_4,param_5,param_6,param_7,param_8,this,"%lld",
             (long)local_58,param_12,param_13,param_14,in_stack_ffffffffffffff98);
      return this;
    }
    printf(dVar13,local_58,param_3,param_4,param_5,param_6,param_7,param_8,this,0x5dbfa4,
           (long)local_58,param_12,param_13,param_14,in_stack_ffffffffffffff98);
    return this;
  }
LAB_00182548:
  local_48 = (double)(_DAT_005d91b0 & (ulong)local_58);
  uStack_40 = _UNK_005d91b8 & in_XMM0_Qb;
  dVar13 = log10(local_48);
  uVar15 = (ulong)(_DAT_005d9000 - dVar13) & -(ulong)(local_48 < _DAT_005d9000);
  dVar14 = (double)(~-(ulong)(local_48 < _DAT_005d9000) & (ulong)dVar13 | uVar15);
  uVar9 = 0x10 - (int)(long)dVar14;
  if (param_10 < uVar9) {
    uVar9 = param_10;
  }
  uVar10 = (ulong)uVar9;
  if (((byte)this[0x13] & 0x40) == 0) {
    printf(dVar13,dVar14,uVar15,param_4,param_5,param_6,param_7,param_8,this,"%s%dlf",&DAT_005db3b4,
           uVar10,param_13,param_14,in_stack_ffffffffffffff98);
    SVar2 = this[0x13];
  }
  else {
    printf(dVar13,dVar14,uVar15,param_4,param_5,param_6,param_7,param_8,this,0x5dbfae,&DAT_005dbfbc,
           uVar10,param_13,param_14,in_stack_ffffffffffffff98);
    SVar2 = this[0x13];
  }
  if (((byte)SVar2 & 0x40) == 0) {
    pcVar8 = (char *)(**(code **)(*(long *)this + 0x18))(this);
    printf(local_58,extraout_XMM1_Qa_00,uVar15,param_4,param_5,param_6,param_7,param_8,this,pcVar8,
           extraout_RDX_00,uVar10,param_13,param_14,in_stack_ffffffffffffff98);
  }
  else {
    lVar7 = (**(code **)(*(long *)this + 0x20))(this);
    printf(local_58,extraout_XMM1_Qa,uVar15,param_4,param_5,param_6,param_7,param_8,this,lVar7,
           extraout_RDX,uVar10,param_13,param_14,in_stack_ffffffffffffff98);
  }
  uVar9 = (**(code **)(*(long *)this + 0x10))(this);
  if (0 < (int)uVar9) {
    uVar5 = *(uint *)(this + 0x10);
    uVar15 = (ulong)uVar9;
    do {
      uVar10 = uVar15 - 1;
      uVar9 = uVar5 & 0x3fffffff;
      uVar12 = (uint)uVar10;
      if ((uVar5 & 0x40000000) == 0) {
        if (uVar12 < uVar9) {
LAB_001826a5:
          lVar7 = *(long *)(this + 8);
          if (*(char *)(lVar7 + (uVar10 & 0xffffffff)) == '0') goto joined_r0x0018277c;
        }
LAB_00182787:
        uVar9 = *(uint *)(this + 0x10);
        uVar5 = uVar9 & 0x3fffffff;
        if ((uVar9 & 0x40000000) == 0) {
          if (uVar5 <= uVar12) {
            return this;
          }
        }
        else {
          if ((uVar12 < uVar5) &&
             (lVar7 = *(long *)(this + 8), *(short *)(lVar7 + (uVar10 & 0xffffffff) * 2) == 0x2e))
          goto joined_r0x001828af;
          if (uVar5 <= uVar12) {
            return this;
          }
          if ((uVar9 & 0x40000000) != 0) {
            local_62 = 0x2e;
            local_5c = 0;
            iVar6 = ConstString::multiByteToWideString
                              ((undefined2 *)&local_5c,(char *)&local_62,2,0);
            if (iVar6 < 1) {
              return this;
            }
            lVar7 = *(long *)(this + 8);
            if (*(short *)(lVar7 + (uVar10 & 0xffffffff) * 2) != (short)local_5c) {
              return this;
            }
            uVar9 = *(uint *)(this + 0x10);
            uVar5 = uVar9 & 0x3fffffff;
            goto joined_r0x001828af;
          }
        }
        lVar7 = *(long *)(this + 8);
        if (*(char *)(lVar7 + (uVar10 & 0xffffffff)) != '.') {
          return this;
        }
joined_r0x001828af:
        if (lVar7 == 0) {
          return this;
        }
        if (uVar5 == 0) {
          return this;
        }
        if (uVar5 <= uVar12) {
          return this;
        }
        resize(this,uVar12,uVar9 >> 0x1e & 1,'\0');
        if (((byte)this[0x13] & 0x40) == 0) {
          pcVar8 = (char *)(**(code **)(*(long *)this + 0x18))(this);
          uVar9 = 0xffffffff;
          do {
            uVar9 = uVar9 + 1;
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
        }
        else {
          lVar7 = (**(code **)(*(long *)this + 0x20))(this);
          uVar15 = 0;
          do {
            psVar1 = (short *)(lVar7 + uVar15);
            uVar15 = uVar15 + 2;
          } while (*psVar1 != 0);
          uVar9 = ((uint)(uVar15 >> 1) & 0x7fffffff) + 0x3fffffff;
        }
        *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar9 & 0x3fffffff;
        return this;
      }
      if ((uVar9 <= uVar12) ||
         (lVar7 = *(long *)(this + 8), *(short *)(lVar7 + (uVar10 & 0xffffffff) * 2) != 0x30)) {
        if (uVar12 < uVar9) {
          if ((uVar5 & 0x40000000) == 0) goto LAB_001826a5;
          local_64 = 0x30;
          local_60 = 0;
          iVar6 = ConstString::multiByteToWideString((undefined2 *)&local_60,(char *)&local_64,2,0);
          if (0 < iVar6) {
            lVar7 = *(long *)(this + 8);
            if (*(short *)(lVar7 + (uVar10 & 0xffffffff) * 2) == (short)local_60) {
              uVar5 = *(uint *)(this + 0x10);
              uVar9 = uVar5 & 0x3fffffff;
              goto joined_r0x0018277c;
            }
          }
        }
        goto LAB_00182787;
      }
joined_r0x0018277c:
      if (((lVar7 != 0) && (uVar9 != 0)) && (uVar12 < uVar9)) {
        resize(this,uVar12,uVar5 >> 0x1e & 1,'\0');
        if (((byte)this[0x13] & 0x40) == 0) {
          pcVar8 = (char *)(**(code **)(*(long *)this + 0x18))(this);
          uVar9 = 0xffffffff;
          do {
            uVar9 = uVar9 + 1;
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
        }
        else {
          lVar7 = (**(code **)(*(long *)this + 0x20))(this);
          uVar11 = 0;
          do {
            psVar1 = (short *)(lVar7 + uVar11);
            uVar11 = uVar11 + 2;
          } while (*psVar1 != 0);
          uVar9 = ((uint)(uVar11 >> 1) & 0x7fffffff) + 0x3fffffff;
        }
        uVar5 = *(uint *)(this + 0x10) & 0xc0000000 | uVar9 & 0x3fffffff;
        *(uint *)(this + 0x10) = uVar5;
      }
      bVar4 = 1 < (long)uVar15;
      uVar15 = uVar10;
    } while (bVar4);
  }
  return this;
}


