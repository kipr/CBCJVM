package cbc;

public class Sonar {
	public Sonar(int port) {
		this.port = port;
	}
	public int getValue() {
		return CBC.sensor.analog(port);
	}
	public int getValue10() {
		return CBC.sensor.analog10(port);
	}
	int port;
}
