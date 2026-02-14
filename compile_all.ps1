# PowerShell script to compile all .c files into the output folder

# Ensure the output directory exists
if (-not (Test-Path "output")) {
    New-Item -ItemType Directory -Path "output" | Out-Null
}

$cFiles = Get-ChildItem -Filter *.c

if ($cFiles.Count -eq 0) {
    Write-Host "No .c files found in the current directory." -ForegroundColor Yellow
    exit
}

Write-Host "Starting compilation of $($cFiles.Count) files..." -ForegroundColor Cyan

foreach ($file in $cFiles) {
    $baseName = $file.BaseName
    $outputFile = "output\$baseName.exe"
    
    Write-Host "Compiling $($file.Name) -> $outputFile ..." -NoNewline
    
    # Run GCC
    & gcc $file.FullName -o $outputFile
    
    if ($LASTEXITCODE -eq 0) {
        Write-Host " [SUCCESS]" -ForegroundColor Green
    } else {
        Write-Host " [FAILED]" -ForegroundColor Red
    }
}

Write-Host "`nCompilation process finished." -ForegroundColor Cyan
