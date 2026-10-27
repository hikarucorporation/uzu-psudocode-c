// Function : fromString
// Namespace: Steinberg:FUID
// Entry    : 00185e50
// Prototype: undefined8 fromString(FUID * this, char * param_1)
// Body     : 00185e50 - 001861d8


/* Steinberg::FUID::fromString(char const*) */

undefined8 __thiscall Steinberg::FUID::fromString(FUID *this,char *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined1 in_AL;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  if (((param_1 == (char *)0x0) || (cVar3 = *param_1, cVar3 == '\0')) ||
     (uStack_38._0_1_ = in_AL, sVar4 = strlen(param_1), sVar4 != 0x20)) {
    return 0;
  }
  uStack_38._0_2_ = CONCAT11(cVar3,(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[1],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  lVar1 = (long)&uStack_38 + 1;
  lVar2 = (long)&uStack_38 + 4;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[8] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[2],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[3],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[9] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[4],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[5],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[10] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[6],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[7],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0xb] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[8],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[9],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0xc] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[10],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0xb],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0xd] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0xc],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0xd],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0xe] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0xe],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0xf],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0xf] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x10],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x11],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x10] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x12],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x13],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x11] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x14],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x15],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x12] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x16],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x17],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x13] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x18],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x19],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x14] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x1a],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x1b],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x15] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x1c],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x1d],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x16] = uStack_38._4_1_;
  uStack_38._0_2_ = CONCAT11(param_1[0x1e],(undefined1)uStack_38);
  uStack_38._0_3_ = CONCAT12(param_1[0x1f],(undefined2)uStack_38);
  uStack_38 = (ulong)(uint3)uStack_38;
  uVar5 = __isoc99_sscanf(lVar1,&DAT_005db51c,lVar2);
  this[0x17] = uStack_38._4_1_;
  return CONCAT71((int7)((ulong)uVar5 >> 8),1);
}


