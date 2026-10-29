# Temple Run

Project Temple Run 1.43.0 từ bộ APK đã cung cấp, đang phục hồi assets và gameplay C# theo bằng chứng IL2CPP.

- Engine gốc: Unity **2022.3.62f2**; kiến trúc ARM64.
- Công cụ phân tích: [Reverse-Engineer-Game](https://github.com/LuciusTran/Reverse-Engineer-Game), Cpp2IL, AssetRipper và Ghidra có sẵn trên máy.
- `Evidence/input-provenance.json`: định danh gói và SHA-256 các đầu vào.
- `Evidence/apk-inventory.json`: đường dẫn, kích thước và SHA-256 từng file trong APK.

## Tiến độ

- [x] Kiểm kê XAPK, APK chính và split ARM64; xác định Unity/IL2CPP.
- [x] Trích xuất assets và cấu trúc project Unity.
- [x] Ánh xạ 6.930 thân hàm game/Unity; dịch ngược 472 thân hàm được chọn, kiểm tra toàn bộ bytes từng hàm.
- [ ] Phục hồi luồng C# và kiểm thử player.

Assets và scene gốc đã xuất vào `Assets/`. Các script hiện còn thân hàm stub; chưa phải project có thể chơi.
Không đưa APK, thư viện native gốc, cache editor, credentials hoặc tool binaries vào repository.

Mã giả native: [DecompiledNative/INDEX.md](DecompiledNative/INDEX.md). Metadata thô nằm ngoài `Assets` trong `NativeMapWithAddresses/`; các thân hàm ở đó là stub, không phải C# gameplay đã phục hồi.
