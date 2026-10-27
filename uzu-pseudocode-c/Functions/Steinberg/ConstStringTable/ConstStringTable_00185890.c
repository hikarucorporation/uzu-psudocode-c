// Function : ConstStringTable
// Namespace: Steinberg:ConstStringTable
// Entry    : 00185890
// Prototype: undefined8 ConstStringTable(void)
// Body     : 00185890 - 001858fa


/* Steinberg::ConstStringTable::ConstStringTable() */

undefined8 __thiscall Steinberg::ConstStringTable::ConstStringTable(void)

{
  undefined8 in_RAX;
  
  stringMap = operator_new(0x30);
  *(undefined4 *)((long)stringMap + 8) = 0;
  *(undefined8 *)((long)stringMap + 0x10) = 0;
  *(long *)((long)stringMap + 0x18) = (long)stringMap + 8;
  *(long *)((long)stringMap + 0x20) = (long)stringMap + 8;
  *(undefined8 *)((long)stringMap + 0x28) = 0;
  charMap = operator_new(0x30);
  *(undefined4 *)((long)charMap + 8) = 0;
  *(undefined8 *)((long)charMap + 0x10) = 0;
  *(long *)((long)charMap + 0x18) = (long)charMap + 8;
  *(long *)((long)charMap + 0x20) = (long)charMap + 8;
  *(undefined8 *)((long)charMap + 0x28) = 0;
  return in_RAX;
}


