// Function : incrementTrailingNumber
// Namespace: Steinberg:String
// Entry    : 00182910
// Prototype: bool incrementTrailingNumber(String * this, uint param_1, ushort param_2, uint param_3, undefined4 param_4)
// Body     : 00182910 - 00182c44


/* Steinberg::String::incrementTrailingNumber(unsigned int, char16_t, unsigned int, bool) */

bool __thiscall
Steinberg::String::incrementTrailingNumber
          (String *this,uint param_1,ushort param_2,uint param_3,undefined4 param_4)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  uint local_18c;
  ulong local_188;
  uint local_180;
  undefined4 local_17c;
  char local_178 [64];
  char local_138 [264];
  
  if (0x20 < param_1) goto LAB_00182c2c;
  local_188 = 1;
  lVar9 = *(long *)(this + 8);
  local_17c = param_4;
  if (lVar9 != 0) {
    uVar7 = *(uint *)(this + 0x10);
    if ((uVar7 & 0x3fffffff) != 0) {
      uVar8 = (uVar7 & 0x3fffffff) - 1;
      uVar11 = uVar8;
      do {
        if ((uVar7 & 0x40000000) == 0) {
          if (9 < (int)*(char *)(lVar9 + (ulong)uVar11) - 0x30U) goto LAB_001829bc;
        }
        else {
          iVar3 = iswdigit((uint)*(ushort *)(lVar9 + (ulong)uVar11 * 2));
          if (iVar3 == 0) goto LAB_001829bc;
          lVar9 = *(long *)(this + 8);
          uVar7 = *(uint *)(this + 0x10);
        }
        uVar11 = uVar11 - 1;
        if (((lVar9 == 0) || ((uVar7 & 0x3fffffff) == 0)) || ((uVar7 & 0x3fffffff) <= uVar11))
        goto LAB_001829bc;
      } while( true );
    }
  }
  goto LAB_00182b66;
LAB_001829bc:
  if (((int)uVar11 < (int)uVar8) && (-2 < (int)uVar11)) {
    local_18c = uVar11 + 1;
    lVar9 = *(long *)(this + 8);
    local_180 = param_3;
    if (lVar9 != 0) {
      uVar7 = *(uint *)(this + 0x10) & 0x3fffffff;
      if ((uVar7 != 0) && (local_18c < uVar7)) {
        uVar4 = (ulong)local_18c;
        if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
          if (*(char *)(lVar9 + uVar4) != '\0') {
            lVar9 = lVar9 + uVar4;
            bVar10 = 0;
            do {
              iVar3 = __isoc99_sscanf(lVar9,&DAT_005db39c,&local_188);
              if (iVar3 == 1) goto LAB_00182a61;
              pcVar5 = (char *)(lVar9 + 1);
              lVar9 = lVar9 + 1;
            } while (*pcVar5 != '\0');
          }
        }
        else {
          uVar4 = ConstString::scanInt64_16((short *)(uVar4 * 2 + lVar9),&local_188,'\x01');
          bVar10 = (byte)uVar4 ^ 1;
LAB_00182a61:
          if ((bVar10 == 0) && ((char)local_17c == '\0')) {
            local_188 = local_188 + 1;
          }
        }
      }
    }
    param_3 = local_180;
    uVar7 = *(uint *)(this + 0x10);
    uVar8 = uVar7 & 0x3fffffff;
    if (((param_2 != 0) && (-1 < (int)uVar11)) && (uVar11 < uVar8)) {
      if ((uVar7 & 0x40000000) == 0) {
        uVar6 = 0x5f;
        if (param_2 < 0x80) {
          uVar6 = param_2;
        }
        if (*(char *)(*(long *)(this + 8) + (ulong)uVar11) == (char)uVar6) goto LAB_00182acc;
      }
      else if (*(ushort *)(*(long *)(this + 8) + (ulong)uVar11 * 2) == param_2) {
LAB_00182acc:
        local_18c = uVar11;
      }
    }
    if (((*(long *)(this + 8) != 0) && (uVar8 != 0)) && (local_18c < uVar8)) {
      resize(this,local_18c,uVar7 >> 0x1e & 1,'\0');
      if (((byte)this[0x13] & 0x40) == 0) {
        pcVar5 = (char *)(**(code **)(*(long *)this + 0x18))(this);
        uVar7 = 0xffffffff;
        do {
          uVar7 = uVar7 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
      }
      else {
        lVar9 = (**(code **)(*(long *)this + 0x20))(this);
        uVar4 = 0;
        do {
          psVar1 = (short *)(lVar9 + uVar4);
          uVar4 = uVar4 + 2;
        } while (*psVar1 != 0);
        uVar7 = ((uint)(uVar4 >> 1) & 0x7fffffff) + 0x3fffffff;
      }
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar7 & 0x3fffffff;
    }
  }
LAB_00182b66:
  if ((long)local_188 < (long)(ulong)param_3) {
    local_188 = (ulong)param_3;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if (((param_2 == 0) || (*(long *)(this + 8) == 0)) ||
       ((*(uint *)(this + 0x10) & 0x3fffffff) == 0)) {
      snprintf(local_138,0x40,"%%0%uu",param_1);
      snprintf(local_178,0x40,local_138,local_188 & 0xffffffff);
    }
    else {
      snprintf(local_138,0x40,"%%c%%0%uu",(ulong)param_1);
      snprintf(local_178,0x40,local_138,param_2,local_188 & 0xffffffff);
    }
    append(this,local_178,0xffffffff);
  }
  else {
    append(this,local_138,0xffffffff);
  }
LAB_00182c2c:
  return param_1 < 0x21;
}


