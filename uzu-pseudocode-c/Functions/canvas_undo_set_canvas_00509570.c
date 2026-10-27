// Function : canvas_undo_set_canvas
// Namespace: 
// Entry    : 00509570
// Prototype: undefined canvas_undo_set_canvas(long param_1)
// Body     : 00509570 - 005095e4


void canvas_undo_set_canvas(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  
  puVar3 = getbytes(0x34);
  *puVar3 = *(undefined4 *)(param_1 + 0x50);
  puVar3[1] = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(puVar3 + 4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(puVar3 + 8) = uVar2;
  puVar3[10] = *(undefined4 *)(param_1 + 0x78);
  puVar3[0xb] = *(undefined4 *)(param_1 + 0x7c);
  bVar4 = *(byte *)(param_1 + 0xe8) >> 7;
  bVar1 = *(byte *)(puVar3 + 0xc);
  *(byte *)(puVar3 + 0xc) = bVar1 & 0xfe | bVar4;
  bVar5 = (byte)(*(ushort *)(param_1 + 0xe8) >> 7) & 2;
  *(byte *)(puVar3 + 0xc) = bVar1 & 0xfc | bVar4 | bVar5;
  *(byte *)(puVar3 + 0xc) =
       bVar1 & 0xf8 | bVar4 | bVar5 | (byte)(*(ushort *)(param_1 + 0xe8) >> 7) & 4;
  return;
}


