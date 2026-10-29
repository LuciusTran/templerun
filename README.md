# Temple Run

Project Temple Run 1.43.0 từ bộ APK đã cung cấp, đang phục hồi assets và gameplay C# theo bằng chứng IL2CPP.

- Engine gốc: Unity **2022.3.62f2**; kiến trúc ARM64.
- Công cụ phân tích: [Reverse-Engineer-Game](https://github.com/LuciusTran/Reverse-Engineer-Game), Cpp2IL, AssetRipper và Ghidra có sẵn trên máy.
- `Evidence/input-provenance.json`: định danh gói và SHA-256 các đầu vào.
- `Evidence/apk-inventory.json`: đường dẫn, kích thước và SHA-256 từng file trong APK.

## Tiến độ

- [x] Kiểm kê XAPK, APK chính và split ARM64; xác định Unity/IL2CPP.
- [ ] Trích xuất assets và cấu trúc project Unity.
- [ ] Ánh xạ metadata → địa chỉ native và dịch ngược các hàm gameplay.
- [ ] Phục hồi luồng C# và kiểm thử player.

Commit đầu tiên chứa dữ liệu kiểm kê; chưa phải project Unity có thể chơi.
Không đưa APK, thư viện native gốc, cache editor, credentials hoặc tool binaries vào repository.
