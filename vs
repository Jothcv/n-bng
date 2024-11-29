private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    // Crear un cuadro de diálogo para abrir archivos
    OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

    // Configurar propiedades del cuadro de diálogo
    openFileDialog->InitialDirectory = "C:\\";
    openFileDialog->Filter = "Todos los archivos (*.*)|*.*|Archivos de texto (*.txt)|*.txt";
    openFileDialog->FilterIndex = 1;
    openFileDialog->RestoreDirectory = true;

    // Mostrar el cuadro de diálogo
    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        // Obtener la ruta completa del archivo seleccionado
        String^ filePath = openFileDialog->FileName;

        // Mostrar la ruta del archivo en un MessageBox (opcional)
        MessageBox::Show("Archivo seleccionado: " + filePath);
    }
}
