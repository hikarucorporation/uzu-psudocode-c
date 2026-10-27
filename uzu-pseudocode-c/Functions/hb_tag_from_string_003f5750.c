// Function : hb_tag_from_string
// Namespace: 
// Entry    : 003f5750
// Prototype: uint hb_tag_from_string(char * param_1)
// Body     : 003f5750 - 003f57ad


uint hb_tag_from_string(char *param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined4 local_4;
  
  uVar3 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    local_4._1_3_ = (undefined3)((ulong)in_RAX >> 0x28);
    local_4 = CONCAT31(local_4._1_3_,cVar1);
    if (param_1[1] == '\0') {
      uVar3 = 1;
    }
    else {
      local_4._2_2_ = (undefined2)((ulong)in_RAX >> 0x30);
      uVar2 = CONCAT11(param_1[1],cVar1);
      local_4 = CONCAT22(local_4._2_2_,uVar2);
      if (param_1[2] == '\0') {
        uVar3 = 2;
      }
      else {
        local_4._3_1_ = (undefined1)((ulong)in_RAX >> 0x38);
        local_4 = CONCAT13(local_4._3_1_,CONCAT12(param_1[2],uVar2));
        uVar3 = 3;
      }
    }
    memset((void *)((long)&local_4 + (ulong)uVar3),0x20,(ulong)(4 - uVar3));
    uVar3 = local_4 >> 0x18 | (local_4 & 0xff0000) >> 8 | (local_4 & 0xff00) << 8 | local_4 << 0x18;
  }
  return uVar3;
}


