import javax.swing.*;
import java.awt.event.*;

class L8Q3 extends JFrame {
    private long startTime;
    private boolean running = false;
    private JLabel label;
    private JButton startBtn, stopBtn, resetBtn;
    private Thread timerThread;

    public L8Q3() {
        setTitle("Stopwatch");
        setSize(300, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(null);

        label = new JLabel("Time: 0 ms", SwingConstants.CENTER);
        label.setBounds(50, 20, 200, 30);
        add(label);

        startBtn = new JButton("Start");
        startBtn.setBounds(30, 70, 70, 30);
        add(startBtn);

        stopBtn = new JButton("Stop");
        stopBtn.setBounds(110, 70, 70, 30);
        stopBtn.setEnabled(false);
        add(stopBtn);

        resetBtn = new JButton("Reset");
        resetBtn.setBounds(190, 70, 70, 30);
        add(resetBtn);

        startBtn.addActionListener(e -> startTimer());
        stopBtn.addActionListener(e -> stopTimer());
        resetBtn.addActionListener(e -> resetTimer());

        setVisible(true);
    }

    private void startTimer() {
        if (!running) {
            running = true;
            startTime = System.currentTimeMillis();
            timerThread = new Thread(() -> {
                while (running) {
                    long elapsed = System.currentTimeMillis() - startTime;
                    label.setText("Time: " + elapsed + " ms");
                    try {
                        Thread.sleep(10);
                    } catch (InterruptedException ignored) {}
                }
            });
            timerThread.start();
            startBtn.setEnabled(false);
            stopBtn.setEnabled(true);
        }
    }

    private void stopTimer() {
        running = false;
        startBtn.setEnabled(true);
        stopBtn.setEnabled(false);
    }

    private void resetTimer() {
        running = false;
        label.setText("Time: 0 ms");
        startBtn.setEnabled(true);
        stopBtn.setEnabled(false);
    }

    public static void main(String[] args) {
        new L8Q3();
    }
}
