// Function : gatom_properties
// Namespace: 
// Entry    : 0052d880
// Prototype: undefined gatom_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0052d880 - 0052d9ce


void gatom_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char local_98;
  char local_97 [98];
  undefined1 local_35;
  
  sVar5 = *(short *)(param_9 + 0x2c);
  fVar1 = *(float *)(param_9 + 0x44);
  fVar2 = *(float *)(param_9 + 0x48);
  bVar3 = *(byte *)(param_9 + 0x78);
  puVar7 = *(undefined8 **)(param_9 + 0x50);
  cVar4 = *(char *)*puVar7;
  if (cVar4 == '-') {
    local_98 = '-';
    strncpy(local_97,(char *)*puVar7,99);
    local_35 = 0;
    pcVar8 = &local_98;
LAB_0052d8ea:
    puVar7 = gensym(pcVar8);
  }
  else if (cVar4 == '\0') {
    pcVar8 = "-";
    goto LAB_0052d8ea;
  }
  uVar6 = *puVar7;
  cVar4 = *(char *)**(undefined8 **)(param_9 + 0x58);
  if (cVar4 == '-') {
    local_98 = '-';
    strncpy(local_97,(char *)**(undefined8 **)(param_9 + 0x58),99);
    local_35 = 0;
    pcVar8 = &local_98;
LAB_0052d92b:
    gensym(pcVar8);
  }
  else if (cVar4 == '\0') {
    pcVar8 = "-";
    goto LAB_0052d92b;
  }
  cVar4 = *(char *)**(undefined8 **)(param_9 + 0x60);
  if (cVar4 == '-') {
    local_98 = '-';
    strncpy(local_97,(char *)**(undefined8 **)(param_9 + 0x60),99);
    local_35 = 0;
    pcVar8 = &local_98;
  }
  else {
    if (cVar4 != '\0') goto LAB_0052d974;
    pcVar8 = "-";
  }
  gensym(pcVar8);
LAB_0052d974:
  pdgui_stub_vnew((double)fVar2,(double)fVar1,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,"pdtk_gatom_dialog",(char *)param_9,"i ff i sss i",
                  (char *)(ulong)(uint)(int)sVar5,(ulong)(bVar3 >> 1 & 3),(char)uVar6);
  return;
}


