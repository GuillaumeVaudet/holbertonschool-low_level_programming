# Project C: File I/O 

This project is about file descriptors.

This README covers the key functions, flags, and file descriptors used throughout this project.

## Summary
- Read into a text file - [0-read_textfile.c](0-read_textfile.c)
- Create a text file - [1-create_file.c](1-create_file.c)
- Append text at the end of a file - [2-append_text_to_file.c](2-append_text_to_file.c)
- Copy the content of a file to another - [3-cp.c](3-cp.c)

## Functions
- `open()` - open or create a file and return an FD (int). It's always the first step.
- `read()` - Read bytes from an FD to a buffer.
- `write()` - Write bytes from a buffer to an FD.
- `close()` - Close an FD and free resource.

## Flags for open()
We can separate flags into two categories:
### Access mode - mandatory and one at a time
- `O_RDONLY` - Read only
- `O_WRONLY` - Write only
- `O_RDWR` - Read and Write

### Behavior - optional and can be combined with `|`
- `O_CREAT` - Create file if does not exist
- `O_TRUNC` - Truncates file content if it already exists
- `O_APPEND` - Write to the end of file
- `O_EXCL` - Fails if the file already exists